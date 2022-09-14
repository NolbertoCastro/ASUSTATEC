#ifndef inventory_H
#define inventory_H

#include <iostream>
#include "Command.h"
#include "Character.h"

class inventory: public Command{
    public:
        inventory(Character*);
        void execute();
    private:
        Character* Personaje;
};

#endif