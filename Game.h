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
        Character* Player;
        Room *Hallway, *Hallway2, *Hallway3, *Elevator, *WC, *Classroom, *Office;
        Item *Key; 
        Starbucks *S1, *S2;
        pen *P1;
        NPC *Teus, *Seller, *Agent47;
};
#endif //GAME_H