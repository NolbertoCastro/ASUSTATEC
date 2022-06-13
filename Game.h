#ifndef GAME_H
#define GAME_H
#include <iostream>

#include "Room.h"
#include "DesplazaComando.h"
#include "AyudaComando.h"
#include "TomaComando.h"
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
        Room *sala, *comedor, *jardin;
        Item *pocion, *libro, *monedas, *llave; 
};
#endif //GAME_H