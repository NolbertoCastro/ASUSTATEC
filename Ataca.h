#ifndef ATACA_H
#define ATACA_H

#include <iostream>
#include "Comando.h"
#include "Character.h"

class Ataca: public Comando{
    public:
        Ataca();
        Ataca(Character*);
        void ejecuta();
        void imprimevida(Character*);
    private:
        Character* Personaje;
        Character* Conserje;
};
#endif