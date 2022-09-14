#include "ListaPalabras.h"


ListaPalabras::ListaPalabras(){}

void ListaPalabras::addCommand(std::string pal, Command* com){
    palabras.push_back(pal);
    command.push_back(com);
}

int ListaPalabras::esCommand(std::string pal){
    for(int i=0; i<palabras.size(); i++){
        if (palabras[i]==pal){
            return i;
        }
    } 
    return -1;
}

Command* ListaPalabras::getCommand(std::string pal){
    int pos=esCommand(pal);
    if(pos>=0){
        return command[pos];
    }
    return nullptr;
}

std::string ListaPalabras::todosLoscommand(){
    std::string todos="Los command que puedes usar son:\n";
    for(std::string &pal:palabras){
        todos += "\t"+ pal + "\n";
    }
    todos+= "\t->El Command va seguido de una segunda palabra\n";
    todos+= "\t->Los command solos son:\n";
    todos+= "\t\t->Ataca\n";
    todos+= "\t\t->help\n";
    todos+= "\t\t->inventory\n";
    todos+= "\t\t->ImprimeMapa\n";
    return todos;
}
