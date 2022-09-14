#include "Command.h"

Command::Command(){
    command = "";
    segPalabra="";
}

Command::Command(std::string com, std::string seg){
    command = com;
    segPalabra=seg;
}

std::string Command::getCommand() const{
    return command;
}

std::string Command::getSegPalabra() const{
    return segPalabra;
}

void Command::setSegPalabra(std::string seg){
    segPalabra=seg;
}

bool Command::desconocido(){
    return command =="";
}

bool Command::tieneSegPalabra(){
    return segPalabra!="";
}