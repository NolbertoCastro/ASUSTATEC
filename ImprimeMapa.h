#ifndef IMPRIMEMAPA_H
#define IMPRIMEMAPA_H

#include <iostream>
#include "Comando.h"
#include "Character.h"

class ImprimeMapa: public Comando{
    public:
        ImprimeMapa(Character*);
        void ejecuta();
    private:
        Character* Personaje;
};
#endif