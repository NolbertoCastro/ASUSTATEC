#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include "Item.h"
#include "NPC.h"

class Room {
    public:
        Room();
        Room(std::string, bool);
        std::string getDescription();
        Room* getExit(std::string);
        int getMove(std::string);
        void setexits(Room*, Room*, Room*, Room*);
        NPC* getNPC();
        void setNPC(NPC*);
        Item* getItem(int);
        void sacaItem(int);
        void addItem(Item*);
        int searchItem(std::string);
        void descriptionLarga();
        bool keyRequired();
    private:
        std::string description;
        std::vector<Item*> cosas;
        Room* exits[4];
        bool tieneLlave;
        NPC* NPC1;
};
#endif //ROOM_H