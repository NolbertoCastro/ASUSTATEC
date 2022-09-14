#include "Parser.h"

Parser::Parser(){
    command=new wordList;
}


wordList* Parser::getcommand(){
    return command;
}

Command* Parser::generaCommand(){
    
    std::string instruccion, primera, segunda;
    std::cout << ">>>>";
    std::getline(std::cin, instruccion);
    std::stringstream sstr(instruccion);
    sstr >> primera;
    sstr >> segunda;
    sstr.ignore();

    // Excepción si el Command es erroneo
    try  {
       Command* commandWord=command->getCommand(primera);
       if(commandWord){
        commandWord->setprompt(segunda);
        return commandWord;
       } else {
        throw commandWord;
       }
    }
    catch (Command* error)  {
        std::cout << "Ingresaste un valor erroneo\n";
        std::cout << "Ingresa un Command valido por favor\n";
    }
}
