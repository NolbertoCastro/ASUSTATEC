#ifndef GAME_H
#define GAME_H
#include <iostream>

#include "Room.h"
#include "DesplazaComando.h"
#include "AyudaComando.h"
#include "ImprimeMapa.h"
#include "TomaComando.h"
#include "Inventario.h"
#include "Ataca.h"
#include "Parser.h"
#include "Starbucks.h"
#include "Pluma.h"
#include "NPC.h"
#include "Comerciante.h"
#include "Usar.h"

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
        Item *llave; 
        Starbucks *S1, *S2;
        Pluma *P1;
        NPC *Teus, *Comercio, *Agente47;
};
#endif //GAME_H