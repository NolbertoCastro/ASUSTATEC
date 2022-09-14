#ifndef Character_H
#define Character_H

#include <iostream>
#include <vector>

#include "Room.h"
#include "Pluma.h"

class Character{
    private:
        std::string nombre;
        int vida, ataque, dinero, proteccion, VIDAC;
        Room* RoomActual;
        std::vector <Item*> inventory;
    public:
        Character();
        Character(std::string, int, Room*, int, int, int, int);

        std::string getNombre() const;
        int getVida();
        Room* getPosicion();
        std::vector <Item*> getinventory() const;
        int getAtaque() const;
        int getDinero() const;
        int getVIDAC();
        int getProteccion() const;
        Item* getItem(std::string);
        void expulsarItem(std::string);

        void setNombre(std::string);
        void setVida(int);
        void setPosicion(Room*);
        void setinventory(std::vector <Item*>);
        void setAtaque(int);
        void setDinero(int);
        void setVIDAC(int);
        void setProteccion(int);

        void agregarItem(Item*);
        void consultaItem(std::string);

        void imprime();
        void imprimeinventory();
        bool buscaItem(std::string);
        bool camina(std::string);

        int operator+(Item*); 
};

#endif