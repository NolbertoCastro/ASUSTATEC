#ifndef STARBUCKS_H
#define STARBUCKS_H

#include <iostream>
#include "Item.h"

class Starbucks:public Item{
    private:
        int healing;

    public:
        Starbucks();
        Starbucks(std::string, std::string, int, int);
        void setHealing(int);
        int execute();
};

#endif