#include <iostream>

#include "habitacion.h"
#include "item.h"

#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje{
    private:
        std::string nombre;
        Habitacion habitacionActual;
        Item inventario;

    public:
        Personaje();
        Personaje(std::string, Habitacion, Item);

        std::string getNombre() const;
        Habitacion getHabitacionActual() const;
        Item getInventario() const;

        void setNombre(std::string);
        void setHabitacionActual(Habitacion);
        void setItem(Item);

        void caminar(char); //Norte(n)_Sur(s)_Este(e)_Oeste(o)

        void imprimir(); //Habitacion actual
};

#endif