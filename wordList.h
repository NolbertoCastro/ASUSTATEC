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
        int isCommand(std::string);
        Command* getCommand(std::string);
        std::string allCommands();

    private:
        std::vector <std::string> words;
        std::vector <Command*> command;
};
#endif //wordList_H