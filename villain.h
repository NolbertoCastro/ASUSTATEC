#ifndef villain_H
#define villain_H

#include <iostream>
#include "Item.h"
#include "NPC.h"

class villain: public NPC{
    public:
        villain();
        villain(std::string, int, int, int, Item*, int);

        void setRecompensa(Item*);
        Item* getRecompensa();
        
    private:
        Item* recompensa;
};

#endif