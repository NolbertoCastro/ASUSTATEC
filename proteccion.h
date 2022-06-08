#include <iostream>
#include "item.h"

#ifndef PROTECCION_H
#define PROTECCION_H

class Proteccion:public Item{
    private:
        int proteccion;

    public:
        Proteccion();
        Proteccion(std::string, std::string, int, int);

        int getProteccion() const;

        void setProteccion(int);
};

#endif