#include <iostream>

#ifndef ITEM_H
#define ITEM_H

class Item{
    private:
        std::string descripcion;
        int peso;

    public:
        Item();
        Item(std::string, int);

        std::string getDescripcionLarga();
};

#endif