#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Item.h"

class NPC{
    public:
        NPC();
        NPC(std::string, int, int, int);
        void setNombre(std::string);
        void setDano(int);
        void setVida(int);
        void setProteccion(int);
        Item* getRecompensa();
        void setRecompensa(Item*);
        std::string getNombre();
        int getDano();
        int getVida();
        int getProteccion();

    private:
        std::string nombre;
        int dano, vida, proteccion;
        Item* Recompensa;


};

#endif