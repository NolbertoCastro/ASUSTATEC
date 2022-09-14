#ifndef attack_H
#define attack_H

#include <iostream>
#include <random>
#include <ctime>
#include "Command.h"
#include "Character.h"
#include "NPC.h"

class attack: public Command{
    public:
        attack(Character*);
        void execute();
        void printHealth(Character*);
        void printHealthNPC(NPC*);
        void setAtributos();
        void Enemyattack();
    private:
        NPC* Enemy;
        Character* Player;
};

#endif