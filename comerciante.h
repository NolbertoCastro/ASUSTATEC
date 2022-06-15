#ifndef COMERCIANTE_H
#define COMERCIANTE_H

#include <iostream>
#include <vector>
#include "Item.h"
#include "NPC.h"

class Comerciante:public NPC{
    private:
        std::vector<Item*> Inventario;

    public:
        Comerciante();
        Comerciante(std::string, int, int, int);

        Item* getItem(std::string);
        void agregaItem(Item*);
};

#endif