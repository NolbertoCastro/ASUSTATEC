#include <iostream>

#ifndef HABITACION_H
#define HABITACION_H
#include "item.h"

class Habitacion{
    private:
        std::string descripcion;
        Item items;
        //Habitacion salidas; 
        Habitacion();
        Habitacion(std::string,Item);

    public:
    
      Item getItem(int);
      Habitacion getSalida(char);
      std::string getDescrpcionLarga();

      void setItem(int, Item);
      void setSalida(char, Habitacion);
};

#endif