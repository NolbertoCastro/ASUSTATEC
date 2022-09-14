#include "Command.h"

Command::Command(){
    Command = "";
    segPalabra="";
}

Command::Command(std::string com, std::string seg){
    Command = com;
    segPalabra=seg;
}

std::string Command::getCommand() const{
    return Command;
}

std::string Command::getSegPalabra() const{
    return segPalabra;
}

void Command::setSegPalabra(std::string seg){
    segPalabra=seg;
}

bool Command::desconocido(){
    return Command =="";
}

bool Command::tieneSegPalabra(){
    return segPalabra!="";
}