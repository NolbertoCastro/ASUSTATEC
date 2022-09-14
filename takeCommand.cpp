#include "takeCommand.h"


takeCommand::takeCommand(Character* personaje):Command("take", ""){
    jugador=personaje;
}

void takeCommand::execute(){
    if (!tieneSegPalabra()){
        std::cout<<"Que quieres taker de la habitación?...\n" << "no puedo helprte si no me das toda la información..." << std::endl;
    }
    else{
        std::string cosa = getSegPalabra();
        Room* actual= jugador->getPosicion();
        int num=actual->buscaItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        if (num!=-1){
            Item* paraJugador=actual->getItem(num);
            jugador->agregarItem(paraJugador);
            actual->sacaItem(num);
            std::cout << "Ahora tienes en tu poder: "<< std::endl;
            std::cout << paraJugador->getNombre() << std::endl;
        }else{
            std::cout<< "Ese objeto no se encuentra en esta habitacion..."<<std::endl;
        }
    }
}