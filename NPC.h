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
        void setprotection(int);
        int getVIDAC();
        Item* getRecompensa();
        void setRecompensa(Item*);
        std::string getNombre();
        int getDano();
        int getVida();
        int getprotection();

    private:
        std::string nombre;
        int dano, vida, protection, VIDAC;
        Item* Recompensa;


};

#endif