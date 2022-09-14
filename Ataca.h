#ifndef ATACA_H
#define ATACA_H

#include <iostream>
#include <random>
#include <ctime>
#include "Command.h"
#include "Character.h"
#include "NPC.h"

class Ataca: public Command{
    public:
        Ataca(Character*);
        void execute();
        void imprimevida(Character*);
        void imprimevidaNPC(NPC*);
        void setAtributos();
        void enemigoAtaca();
    private:
        NPC* Enemigo;
        Character* Personaje;
};

#endif