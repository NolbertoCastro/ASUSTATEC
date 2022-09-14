#include "useItem.h"

useItem::useItem(Character* personaje):Command("useItem", ""){
    Personaje = personaje;
}

void useItem::execute(){
    if (!tieneprompt()){
        std::cout<< "¿Qué quieres useItem?, debes especificarme que objeto quieres" << std::endl;
    }
    else{
        std::string cosa = getprompt();
        Item* cosita = Personaje->getItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        Personaje->deleteItem(cosa);
        if (cosa == cosita->getName()){
            if (cosa == "Starbucks"){
                Personaje->setHealthC(Personaje->getHealth()+cosita->execute());
                Personaje->setHealth(Personaje->getHealth()+cosita->execute());
                std::cout << "El starbucks te aporto una health de +" << std::to_string(cosita->execute()) << std::endl;
            } else if (cosa == "pen"){
                Personaje->setAttack(*Personaje + cosita);
                std::cout << "La pen te aporta mayor daño ahora golpeas con +" << std::to_string(cosita->execute()) << std::endl;
            }
        } else {
            std::cout<< "No tienes ese objeto en tu inventory" << std::endl;
        }
    }
}