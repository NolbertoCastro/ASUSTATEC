#include <iostream>

#ifndef ITEM_H
#define ITEM_H

class Item{
    private:
        std::string descripcion;
        std::string nombre;
    public:
        Item();
        Item(std::string, std::string);
        std::string getDescripcionLarga();
};

#endif