#ifndef pen_H
#define pen_H

#include <iostream>
#include "Item.h"

class pen:public Item{
    private:
        int moreDamage;
    public:
        pen();
        pen(std::string, std::string, int, int);
        void setMoreDamage(int);
        int execute();
};

#endif