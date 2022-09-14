#include "helpCommand.h"

helpCommand::helpCommand(wordList* words):Command("help", ""){
    validCommands=words;
}

void helpCommand::execute(){
    std::cout<< "Are you lost?, let me show you what commands you can use" << std::endl;
    std::cout << "Available Commands:" << std::endl;
    std::cout << validCommands->allCommands() << std::endl;
}