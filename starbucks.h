#include <iostream>
#include "item.h"

#ifndef STARBUCKS_H
#define STARBUCKS_H

class Starbucks:public Item{
    private:
        int sanacion;

    public:
        Starbucks();
        Starbucks(std::string, std::string, int, int);

        int getSanacion() const;
        
        void setSanacion(int);
};

#endif