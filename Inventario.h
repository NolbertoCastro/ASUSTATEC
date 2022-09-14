#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
#include "Command.h"
#include "Character.h"

class Inventario: public Command{
    public:
        Inventario(Character*);
        void execute();
    private:
        Character* Personaje;
};

#endif