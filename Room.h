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
        Room* getSalida(std::string);
        int numSalida(std::string);
        void setSalidas(Room*, Room*, Room*, Room*);
        NPC* getNPC();
        void setNPC(NPC*);
        Item* getItem(int);
        void sacaItem(int);
        void agregaItem(Item*);
        int searchItem(std::string);
        void descriptionLarga();
        bool requiereLlave();
    private:
        std::string description;
        std::vector<Item*> cosas;
        Room* salidas[4];
        bool tieneLlave;
        NPC* NPC1;
};
#endif //ROOM_H