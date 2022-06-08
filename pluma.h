#include <iostream>
#include "item.h"

#ifndef PLUMA_H
#define PLUMA_H

class Pluma:public Item{
    private:
        int extraDanio;

    public:
        Pluma();
        Pluma(std::string, std::string, int, int);

        int getExtraDanio();
        
        void setExtra(int);
};

#endif