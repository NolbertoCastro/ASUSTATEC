#include "Usar.h"

Usar::Usar(Character* personaje):Command("Usar", ""){
    Personaje = personaje;
}

void Usar::execute(){
    if (!tieneSegPalabra()){
        std::cout<< "¿Qué quieres usar?, debes especificarme que objeto quieres" << std::endl;
    }
    else{
        std::string cosa = getSegPalabra();
        Item* cosita = Personaje->getItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        Personaje->expulsarItem(cosa);
        if (cosa == cosita->getNombre()){
            if (cosa == "Starbucks"){
                Personaje->setVIDAC(Personaje->getVida()+cosita->execute());
                Personaje->setVida(Personaje->getVida()+cosita->execute());
                std::cout << "El starbucks te aporto una vida de +" << std::to_string(cosita->execute()) << std::endl;
            } else if (cosa == "Pluma"){
                Personaje->setAtaque(*Personaje + cosita);
                std::cout << "La pluma te aporta mayor daño ahora golpeas con +" << std::to_string(cosita->execute()) << std::endl;
            }
        } else {
            std::cout<< "No tienes ese objeto en tu inventory" << std::endl;
        }
    }
}