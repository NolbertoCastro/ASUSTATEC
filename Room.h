#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include "Item.h"

class Room {
    public:
        Room();
        Room(std::string, bool);
        std::string getDescripcion();
        Room* getSalida(std::string);
        int numSalida(std::string);
        void setSalidas(Room*, Room*, Room*, Room*);
        Item* getItem(int);
        void sacaItem(int);
        void agregaItem(Item*);
        int buscaItem(std::string);
        void descripcionLarga();
        bool requiereLlave();
    private:
        std::string descripcion;
        std::vector<Item*> cosas;
        Room* salidas[4];
        bool tieneLlave;
};
#endif //ROOM_H