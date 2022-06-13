#ifndef Character_H
#define Character_H

#include <iostream>
#include <vector>

#include "Room.h"
#include "Item.h"

class Character{
    private:
        std::string nombre;
        int vida, ataque, dinero, proteccion;
        Room* RoomActual;
        std::vector <Item*> inventario;
    public:
        Character();
        Character(std::string, int, Room*, std::vector <Item*>, int, int, int);

        std::string getNombre() const;
        int getVida() const;
        Room* getposicion();
        std::vector <Item*> getInventario() const;
        int getAtaque() const;
        int getDinero() const;
        int getProteccion() const;

        void setNombre(std::string);
        void setVida(int);
        void setposicion(Room*);
        void setInventario(std::vector <Item*>);
        void setAtaque(int);
        void setDinero(int);
        void setProteccion(int);

        void agregarItem(Item*);

        void consultaItem(std::string);

        void imprime();
        void imprimeInventario();
};

#endif