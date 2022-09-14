#ifndef seller_H
#define seller_H

#include <iostream>
#include <vector>
#include "Item.h"
#include "NPC.h"

class seller:public NPC{
    private:
        std::vector<Item*> inventory;

    public:
        seller();
        seller(std::string, int, int, int, int);

        Item* getItem(std::string);
        void agregaItem(Item*);
};

#endif