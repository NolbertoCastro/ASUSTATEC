#ifndef VILLANO_H
#define VILLANO_H

#include <iostream>
#include "Item.h"
#include "Room.h"
#include "Character.h"

class Villano:public Character{
    private:
        Item recompensa;

    public:
        Villano();
        Villano(std::string, int, Room*, int, int, int, Item);

        Item getRecompensa() const;

        void setRecompensa(Item);

        int ataca();
};

#endif