#include <iostream>

#ifndef ITEM_H
#define ITEM_H

class Item{
    private:
        std::string nombre;
        std::string descripcion;
        int peso;

    public:
        Item();
        Item(std::string, std::string, int);

        std::string getDescripcion() const;
        std::string getNombre() const;
        int getPeso() const;

        void setDescripcion(std::string);
        void setNombre(std::string);
        void setPeso(int);
};

#endif