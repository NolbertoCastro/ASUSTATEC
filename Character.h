#ifndef Character_H
#define Character_H

#include <iostream>
#include <vector>

#include "habitacion.h"
#include "item.h"

class Character{
    private:
        std::string nombre;
        int vida, ataque, dinero, proteccion;
        Habitacion* habitacionActual;
        std::vector <Item*> inventario;
    public:
        Character();
        Character(std::string, int, Habitacion*, std::vector <Item*>, int, int, int);

        std::string getNombre() const;
        int getVida() const;
        Habitacion* getHabitacionActual();
        std::vector <Item*> getInventario() const;
        int getAtaque() const;
        int getDinero() const;
        int getProteccion() const;

        void setNombre(std::string);
        void setVida(int);
        void setHabitacionActual(Habitacion*);
        void setInventario(std::vector <Item*>);
        void setAtaque(int);
        void setDinero(int);
        void setProteccion(int);

        void agregarItem(Item*);

        Item* consultaItem(int) const;

        void imprime();
        void imprimeInventario();
};

#endif