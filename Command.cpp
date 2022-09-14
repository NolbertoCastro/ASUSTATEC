#include "Command.h"

Command::Command(){
    command = "";
    prompt="";
}

Command::Command(std::string commandWord, std::string promptWord){
    command = commandWord;
    prompt= promptWord;
}

std::string Command::getCommand() const{
    return command;
}

std::string Command::getprompt() const{
    return prompt;
}

void Command::setprompt(std::string promptWord){
    prompt=promptWord;
}

bool Command::unKnown(){
    return command =="";
}

bool Command::promptExistance(){
    return prompt!="";
}