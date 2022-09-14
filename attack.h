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
        void imprimevida(Character*);
        void imprimevidaNPC(NPC*);
        void setAtributos();
        void enemigoattack();
    private:
        NPC* Enemigo;
        Character* Personaje;
};

#endif