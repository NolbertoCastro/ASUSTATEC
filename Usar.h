#ifndef USAR_H
#define USAR_H

#include <iostream>
#include "Comando.h"
#include "Character.h"
#include "Item.h"
#include "Room.h"

class Usar: public Comando{
    public:
        Usar(Character*);
        void ejecuta();
    private:
        Character* Personaje;
};

#endif