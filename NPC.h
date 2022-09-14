#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Item.h"

class NPC{
    public:
        NPC();
        NPC(std::string, int, int, int, int);
        void setName(std::string);
        void setDano(int);
        void setHealth(int);
        void setHealthC(int);
        void setProtection(int);
        int getHealthC();
        Item* getRecompensa();
        void setRecompensa(Item*);
        std::string getName();
        int getDano();
        int getHealth();
        int getProtection();

    private:
        std::string name;
        int dano, health, protection, HealthC;
        Item* Recompensa;


};

#endif