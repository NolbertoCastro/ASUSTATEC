#include <iostream>

#ifndef HABITACION_H
#define HABITACION_H
#include "item.h"

class Habitacion{
    private:
      std::string nombre;
      std::string descripcion;
      Item items;
      //Habitacion salidas; 

    public:
      Habitacion();
      Habitacion(std::string,std::string,Item);
      Item getItem(int);
      Habitacion getSalida(char);
      std::string getDescrpcionLarga();
      std::string getNombre();
      void setItem(int, Item);
      void setSalida(char, Habitacion);
      void setNombre(std::string);
};

#endif