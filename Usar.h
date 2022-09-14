#ifndef USAR_H
#define USAR_H

#include <iostream>
#include "Command.h"
#include "Character.h"
#include "Item.h"
#include "Room.h"

class Usar: public Command{
    public:
        Usar(Character*);
        void execute();
    private:
        Character* Personaje;
};

#endif