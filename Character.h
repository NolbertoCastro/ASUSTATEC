#ifndef Character_H
#define Character_H

#include <iostream>
#include <vector>

#include "Room.h"
#include "item.h"

class Character{
    private:
        std::string nombre;
        int vida, ataque, dinero, proteccion;
        Room* habitacionActual;
        std::vector <Item*> inventario;
    public:
        Character();
        Character(std::string, int, Habitacion*, std::vector <Item*>, int, int, int);

        std::string getNombre() const;
        int getVida() const;
        Habitacion* getposicion();
        std::vector <Item*> getInventario() const;
        int getAtaque() const;
        int getDinero() const;
        int getProteccion() const;

        void setNombre(std::string);
        void setVida(int);
        void setposicion(Habitacion*);
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