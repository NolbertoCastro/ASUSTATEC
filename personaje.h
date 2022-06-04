#include <iostream>

#include "habitacion.h"
#include "item.h"

#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje{
    private:
        std::string nombre;
        Habitacion habitacionActual;
        Item inventario[7];
        int vida;
        int proteccion;
        int daño;
    public:
        Personaje();
        Personaje(std::string, Habitacion, Item);
        std::string getNombre() const;
        Habitacion getHabitacionActual() const;
        Item getInventario() const;
        int getvida();
        int getproteccion();
        int getdaño();
        void setvida(int);
        void setdaño(int);
        void setproteccion(int);
        void setNombre(std::string);
        void setHabitacionActual(Habitacion);
        void setItem(Item);
        void caminar(std::string); //Norte(n)_Sur(s)_Este(e)_Oeste(o)
        void buscarItem(std::string);
        void imprimir(); //Habitacion actual
};

#endif