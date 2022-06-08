#ifndef COMERCIANTE_H
#define COMERCIANTE_H

#include <iostream>
#include "item.h"
#include "habitacion.h"
#include "personaje.h"

class Comerciante:public Personaje{
    private:
        Item inventario[5];

    public:
        Comerciante();
        Comerciante(std::string, int, Habitacion*, std::vector <Item*>, int, int, int, Item[]);

        Item getItem(int);
        bool getTarjeta(int);
};

#endif