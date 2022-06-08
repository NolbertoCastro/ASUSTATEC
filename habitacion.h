#include <iostream>
#include "item.h"

#ifndef HABITACION_H
#define HABITACION_H

class Habitacion{
    private:
        std::string nombre, descripcion;
        Item items[3];
        Habitacion* salida;

    public:
        Habitacion();
        Habitacion(std::string, std::string, Habitacion*, Item[3]);

        std::string getDescripcion() const;
        std::string getNombre() const;
        Item getItem() const;
        Habitacion* getSalida() const;
};

#endif