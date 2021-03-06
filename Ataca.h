#ifndef ATACA_H
#define ATACA_H

#include <iostream>
#include <random>
#include <ctime>
#include "Comando.h"
#include "Character.h"
#include "NPC.h"

class Ataca: public Comando{
    public:
        Ataca(Character*);
        void ejecuta();
        void imprimevida(Character*);
        void imprimevidaNPC(NPC*);
        void setAtributos();
        void enemigoAtaca();
    private:
        NPC* Enemigo;
        Character* Personaje;
};

#endif