#include "Usar.h"

Usar::Usar(Character* personaje):Comando("Usar", ""){
    Personaje = personaje;
}

void Usar::ejecuta(){
    if (!tieneSegPalabra()){
        std::cout<< "¿Qué quieres usar?, debes especificarme que objeto quieres" << std::endl;
    }
    else{
        std::string cosa = getSegPalabra();
        Item* cosita = Personaje->getItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        if (cosa == cosita->getNombre()){
            if (cosa == "Starbucks"){
                Personaje->setVida(Personaje->getVida()+cosita->ejecuta());
                std::cout << "El starbucks te aporto una vida de +" << std::to_string(cosita->ejecuta()) << std::endl;
            } else if (cosa == "Pluma"){
                Personaje->setAtaque(Personaje->getAtaque()+ cosita->ejecuta());
                std::cout << "La pluma te aporta mayor daño ahora golpeas con +" << std::to_string(cosita->ejecuta()) << std::endl;
            }
        } else {
            std::cout<< "No tienes ese objeto en tu inventario" << std::endl;
        }
        // if (num!=-1){
        //     Item* paraJugador=actual->getItem(num);
        //     jugador->agregarItem(paraJugador);
        //     actual->sacaItem(num);
        //     std::cout << "Ahora tienes en tu poder: "<< std::endl;
        //     std::cout << paraJugador->getNombre() << std::endl;
        // }else{
        //     std::cout<< "Ese objeto no se encuentra en esta habitacion..."<<std::endl;
        // }
    }
}