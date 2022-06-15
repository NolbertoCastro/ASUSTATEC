#ifndef ITEM_H
#define ITEM_H
#include <iostream>

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
        virtual void imprimirItem();
        virtual int ejecuta();
};

#endif