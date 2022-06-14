#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
#include "Comando.h"
#include "Character.h"

class Inventario: public Comando{
    public:
        Inventario(Character*);
        void ejecuta();
    private:
        Character* Personaje;
};

#endif