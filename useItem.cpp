#include "useItem.h"

useItem::useItem(Character* Player):Command("useItem", ""){
    Player = Player;
}

void useItem::execute(){
    if (!promptExistance()){
        std::cout<< "¿Qué quieres useItem?, debes especificarme que objeto quieres" << std::endl;
    }
    else{
        std::string cosa = getprompt();
        Item* cosita = Player->getItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        Player->deleteItem(cosa);
        if (cosa == cosita->getName()){
            if (cosa == "Starbucks"){
                Player->setHealthC(Player->getHealth()+cosita->execute());
                Player->setHealth(Player->getHealth()+cosita->execute());
                std::cout << "El starbucks te aporto una health de +" << std::to_string(cosita->execute()) << std::endl;
            } else if (cosa == "pen"){
                Player->setAttack(*Player + cosita);
                std::cout << "La pen te aporta mayor daño ahora golpeas con +" << std::to_string(cosita->execute()) << std::endl;
            }
        } else {
            std::cout<< "No tienes ese objeto en tu inventory" << std::endl;
        }
    }
}