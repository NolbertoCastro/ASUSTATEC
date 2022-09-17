#include "takeCommand.h"


takeCommand::takeCommand(Character* _Player):Command("take", ""){
    Player= _Player;
}

void takeCommand::execute(){
    if (!promptExistance()){
        std::cout<<"What you wanna do here?...\n" << "I can't help you if i don't have all the information..." << std::endl;
    }
    else{
        std::string cosa = getprompt();
        Room* actual= Player->getPosition();
        int num=actual->searchItem(cosa); //veo si está en el cuarto (posicion dentro del vector)
        if (num!=-1){
            Item* paraJugador=actual->getItem(num);
            Player->addItem(paraJugador);
            actual->deleteItem(num);
            std::cout << "Now you have the power: "<< std::endl;
            std::cout << paraJugador->getName() << std::endl;
        }else{
            std::cout<< "This object is not in this room..."<<std::endl;
        }
    }
}