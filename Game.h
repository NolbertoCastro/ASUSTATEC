#ifndef GAME_H
#define GAME_H
#include <iostream>

#include "Room.h"
#include "moveCommand.h"
#include "helpCommand.h"
#include "printMap.h"
#include "takeCommand.h"
#include "inventory.h"
#include "attack.h"
#include "Parser.h"
#include "Starbucks.h"
#include "pen.h"
#include "NPC.h"
#include "seller.h"
#include "useItem.h"

class Game {
    public:
        Game();
        void createElements();
        void createComands();
        void play();
        bool processComand(Command*);
        void printWelcome();
    private:
        Parser parser;
        Character* personaje;
        Room *Pasillo, *Pasillo2, *Pasillo3, *Elevador, *Banio, *Salon, *Oficina;
        Item *llave; 
        Starbucks *S1, *S2;
        pen *P1;
        NPC *Teus, *Comercio, *Agente47;
};
#endif //GAME_H