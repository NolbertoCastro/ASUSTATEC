#include "ListaPalabras.h"


ListaPalabras::ListaPalabras(){}

void ListaPalabras::agregaComando(std::string pal, Comando* com){
    palabras.push_back(pal);
    comandos.push_back(com);
}

int ListaPalabras::esComando(std::string pal){
    for(int i=0; i<palabras.size(); i++){
        if (palabras[i]==pal){
            return i;
        }
    } 
    return -1;
}

Comando* ListaPalabras::getComando(std::string pal){
    int pos=esComando(pal);
    if(pos>=0){
        return comandos[pos];
    }
    return nullptr;
}

std::string ListaPalabras::todosLosComandos(){
    std::string todos="Los comandos que puedes usar son:\n";
    for(std::string &pal:palabras){
        todos += "\t"+ pal + "\n";
    }
    todos+= "\t->El comando va seguido de una segunda palabra\n";
    todos+= "\t->Los comandos solos son:\n";
    todos+= "\t\t->Ataca\n";
    todos+= "\t\t->Ayuda\n";
    todos+= "\t\t->Inventario\n";
    todos+= "\t\t->ImprimeMapa\n";
    return todos;
}
