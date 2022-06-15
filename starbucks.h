#ifndef STARBUCKS_H
#define STARBUCKS_H

#include <iostream>
#include "Item.h"

class Starbucks:public Item{
    private:
        int sanacion;

    public:
        Starbucks();
        Starbucks(std::string, std::string, int, int);
        void setSanacion(int);
        int ejecuta();
};

#endif