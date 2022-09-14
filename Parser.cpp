#include "Parser.h"

Parser::Parser(){
    command=new wordList;
}


wordList* Parser::getcommand(){
    return command;
}

Command* Parser::createCommand(){
    
    std::string instruction, firstWord, secondWord;
    std::cout << ">>>>";
    std::getline(std::cin, instruction);
    std::stringstream sstr(instruction);
    sstr >> firstWord;
    sstr >> secondWord;
    sstr.ignore();

    // Excepción si el Command es erroneo
    try  {
       Command* commandWord=command->getCommand(firstWord);
       if(commandWord){
        commandWord->setprompt(secondWord);
        return commandWord;
       } else {
        throw commandWord;
       }
    }
    catch (Command* error)  {
        std::cout << "You wrote a wrong value\n";
        std::cout << "Write a valid Command to use\n";
    }
}
