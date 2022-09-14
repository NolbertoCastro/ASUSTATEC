#ifndef LISTAPALABRAS_H
#define LISTAPALABRAS_H
#include <iostream>
#include <vector>
#include <string>
#include "Command.h"

class ListaPalabras{
    public:
        ListaPalabras();
        void addCommand(std::string, Command*);
        int esCommand(std::string);
        Command* getCommand(std::string);
        std::string todosLoscommand();

    private:
        std::vector <std::string> palabras;
        std::vector <Command*> command;
};
#endif //ListaPalabras_H