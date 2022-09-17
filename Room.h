#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include "item.h"
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
        void deleteItem(int);
        void addItem(Item*);
        int searchItem(std::string);
        void longDescription();
        bool keyRequired();
    private:
        std::string description;
        std::vector<Item*> stuff;
        Room* exits[4];
        bool tieneLlave;
        NPC* NPC1;
};
#endif //ROOM_H