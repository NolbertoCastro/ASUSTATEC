#include "takeCommand.h"


takeCommand::takeCommand(Character* personaje):Command("take", ""){
    jugador=personaje;
}

void takeCommand::execute(){
    if (!tieneprompt()){
        std::cout<<"Que quieres taker de la habitación?...\n" << "no puedo helprte si no me das toda la información..." << std::endl;
    }
    else{
        std::string cosa = getprompt();
        Room* actual= jugador->getPosition();
        int num=actual->searchItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        if (num!=-1){
            Item* paraJugador=actual->getItem(num);
            jugador->addItem(paraJugador);
            actual->sacaItem(num);
            std::cout << "Ahora tienes en tu poder: "<< std::endl;
            std::cout << paraJugador->getName() << std::endl;
        }else{
            std::cout<< "Ese objeto no se encuentra en esta habitacion..."<<std::endl;
        }
    }
}