#ifndef GAME_H
#define GAME_H
#include <iostream>

#include "Room.h"
#include "DesplazaComando.h"
#include "AyudaComando.h"
#include "ImprimeMapa.h"
#include "TomaComando.h"
// #include "Ataca.h"
#include "Parser.h"
#include "Starbucks.h"

class Game {
    public:
        Game();
        void creaElementos();
        void creaComandos();
        void play();
        bool procesaComando(Comando*);
        void imprimeBienvenida();
    private:
        Parser parser;
        Character* personaje;
        Room *Pasillo, *Pasillo2, *Pasillo3, *Elevador, *Banio, *Salon, *Oficina;
        Item *pocion, *libro, *monedas, *llave; 
        Starbucks *S1;
};
#endif //GAME_H