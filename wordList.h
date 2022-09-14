#ifndef wordList_H
#define wordList_H
#include <iostream>
#include <vector>
#include <string>
#include "Command.h"

class wordList{
    public:
        wordList();
        void addCommand(std::string, Command*);
        int esCommand(std::string);
        Command* getCommand(std::string);
        std::string allCommands();

    private:
        std::vector <std::string> palabras;
        std::vector <Command*> command;
};
#endif //wordList_H