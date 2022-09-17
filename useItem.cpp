#include "useItem.h"

useItem::useItem(Character* Player):Command("useItem", ""){
    Player = Player;
}

void useItem::execute(){
    if (!promptExistance()){
        std::cout<< "¿What item you wanna use?,you have to specify with one you wnt to use" << std::endl;
    }
    else{
        std::string cosa = getprompt();
        Item* cosita = Player->getItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        Player->deleteItem(cosa);
        if (cosa == cosita->getName()){
            if (cosa == "Starbucks"){
                Player->setHealthC(Player->getHealth()+cosita->execute());
                Player->setHealth(Player->getHealth()+cosita->execute());
                std::cout << "The starbucks increased your health by " << std::to_string(cosita->execute()) << std::endl;
            } else if (cosa == "pen"){
                Player->setAttack(*Player + cosita);
                std::cout << "The pen increased your damage by " << std::to_string(cosita->execute()) << std::endl;
            }
        } else {
            std::cout<< "You don't have this item in your inventory" << std::endl;
        }
    }
}