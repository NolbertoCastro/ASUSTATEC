#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "item.h"

class NPC{
    public:
        NPC();
        NPC(std::string, int, int, int, int);
        void setName(std::string);
        void setDamage(int);
        void setHealth(int);
        void setHealthC(int);
        void setProtection(int);
        int getHealthC();
        Item* getReward();
        void setReward(Item*);
        std::string getName();
        int getDamage();
        int getHealth();
        int getProtection();

    private:
        std::string name;
        int damage, health, protection, HealthC;
        Item* reward;


};

#endif