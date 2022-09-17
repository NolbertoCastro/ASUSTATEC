#include "wordList.h"


wordList::wordList(){}

void wordList::addCommand(std::string pal, Command* commandWord){
    words.push_back(pal);
    command.push_back(commandWord);
}

int wordList::isCommand(std::string pal){
    for(int i=0; i<words.size(); i++){
        if (words[i]==pal){
            return i;
        }
    } 
    return -1;
}

Command* wordList::getCommand(std::string pal){
    int pos=isCommand(pal);
    if(pos>=0){
        return command[pos];
    }
    return nullptr;
}

std::string wordList::allCommands(){
    std::string all="The commands you can use are:\n";
    for(std::string &pal:words){
        all += "\t"+ pal + "\n";
    }
    all+= "\t->The commands word with a second intructions after them\n";
    all+= "\t->The one word only commands are:\n";
    all+= "\t\t->attack\n";
    all+= "\t\t->help\n";
    all+= "\t\t->inventory\n";
    all+= "\t\t->printMap\n";
    return all;
}
