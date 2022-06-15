#ifndef PLUMA_H
#define PLUMA_H

#include <iostream>
#include "Item.h"

class Pluma:public Item{
    private:
        int extraDanio;
    public:
        Pluma();
        Pluma(std::string, std::string, int, int);
        void setExtra(int);
        int ejecuta();
};

#endif