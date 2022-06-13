#ifndef COMERCIANTE_H
#define COMERCIANTE_H

#include <iostream>
#include "Item.h"
#include "Room.h"
#include "Character.h"

class Comerciante:public Character{
    private:
        Item* inventario[5];

    public:
        Comerciante();
        Comerciante(std::string, int, Room*, std::vector <Item*>, int, int, int, Item*[5]);

        Item* getItem(int);
        Item* getTarjeta(int);
};

#endif