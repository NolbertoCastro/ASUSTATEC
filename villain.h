#ifndef villain_H
#define villain_H

#include <iostream>
#include "item.h"
#include "NPC.h"

class villain: public NPC{
    public:
        villain();
        villain(std::string, int, int, int, Item*, int);

        void setReward(Item*);
        Item* getReward();
        
    private:
        Item* reward;
};

#endif