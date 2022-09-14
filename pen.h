#ifndef pen_H
#define pen_H

#include <iostream>
#include "Item.h"

class pen:public Item{
    private:
        int extraDanio;
    public:
        pen();
        pen(std::string, std::string, int, int);
        void setExtra(int);
        int ejecuta();
};

#endif