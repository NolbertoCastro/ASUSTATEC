#include "wordList.h"


wordList::wordList(){}

void wordList::addCommand(std::string pal, Command* commandWord){
    palabras.push_back(pal);
    command.push_back(commandWord);
}

int wordList::esCommand(std::string pal){
    for(int i=0; i<palabras.size(); i++){
        if (palabras[i]==pal){
            return i;
        }
    } 
    return -1;
}

Command* wordList::getCommand(std::string pal){
    int pos=esCommand(pal);
    if(pos>=0){
        return command[pos];
    }
    return nullptr;
}

std::string wordList::allCommands(){
    std::string todos="Los command que puedes useItem son:\n";
    for(std::string &pal:palabras){
        todos += "\t"+ pal + "\n";
    }
    todos+= "\t->El Command va seguido de una segunda palabra\n";
    todos+= "\t->Los command solos son:\n";
    todos+= "\t\t->attack\n";
    todos+= "\t\t->help\n";
    todos+= "\t\t->inventory\n";
    todos+= "\t\t->printMapa\n";
    return todos;
}
