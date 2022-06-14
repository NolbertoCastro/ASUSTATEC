#ifndef NPC_H
#define NPC_H

#include <iostream>

class NPC{
    public:
        NPC();
        NPC(std::string, int, int, int);
        void setNombre(std::string);
        void setDano(int);
        void setVida(int);
        void setProteccion(int);

        std::string getNombre();
        int getDano();
        int getVida();
        int getProteccion();

    private:
        std::string nombre;
        int dano, vida, proteccion;


};

#endif