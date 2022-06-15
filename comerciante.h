#ifndef COMERCIANTE_H
#define COMERCIANTE_H

#include <iostream>
#include <vector>
#include "Item.h"
#include "Room.h"
#include "NPC.h"

class Comerciante:public NPC{
    private:
        Item* inventario[5];

    public:
        Comerciante();
        Comerciante(std::string, int, Room*, std::vector <Item*>, int, int, int, Item*[5]);

        Item* getItem(int);
        Item* getTarjeta(int);
};

#endif