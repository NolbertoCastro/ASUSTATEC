#include "moveCommand.h"

moveCommand::moveCommand(Character* Player):Command("move", ""){
    Player=Player;
}

void moveCommand::execute(){
    if (!promptExistance()){
        std::cout<<"where you wanna go?... without a direction i can't help you..." << std::endl;
    }
    else{
        std::string direction = getprompt();
        if (Player->move(direction)){
            Room* actual=Player->getPosition();
            std::cout << "You moved to " << direction << std::endl;
            std::cout << "Now you are in the: " << actual->getDescription() << std::endl;
        }
        else{
            std::cout << "There's no exit or you don't have the Key to open the door, find another exit... or the key..." << std::endl;
        }
    }
}