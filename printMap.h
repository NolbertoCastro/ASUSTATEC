#ifndef PRINTMAP_H
#define PRINTMAP_H

#include <iostream>
#include "Command.h"
#include "Character.h"

class printMap: public Command{
    public:
        printMap(Character*);
        void execute();
    private:
        Character* Personaje;
};
#endif