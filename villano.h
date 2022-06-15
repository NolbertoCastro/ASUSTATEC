#ifndef VILLANO_H
#define VILLANO_H

#include <iostream>
#include "Item.h"
#include "NPC.h"

class Villano: public NPC{
    public:
        Villano();
        Villano(std::string, int, int, int, Item*);

        void setRecompensa(Item*);
        Item* getRecompensa();
        
    private:
        Item* recompensa;
};

#endif