#include <iostream>
#include "item.h"
#include "habitacion.h"
#include "personaje.h"

#ifndef VILLANO_H
#define VILLANO_H



class Villano:public Personaje{
    private:
        Item recompensa;

    public:
        Villano();
        Villano(std::string, int, Habitacion*, std::vector <Item*>, int, int, int, Item);

        Item getRecompensa() const;

        void setRecompensa(Item);

        int ataca();
};

#endif