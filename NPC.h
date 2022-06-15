#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Item.h"

class NPC{
    public:
        NPC();
        NPC(std::string, int, int, int, int);
        void setNombre(std::string);
        void setDano(int);
        void setVida(int);
        void setVIDAC(int);
        void setProteccion(int);
        int getVIDAC();
        Item* getRecompensa();
        void setRecompensa(Item*);
        std::string getNombre();
        int getDano();
        int getVida();
        int getProteccion();

    private:
        std::string nombre;
        int dano, vida, proteccion, VIDAC;
        Item* Recompensa;


};

#endif