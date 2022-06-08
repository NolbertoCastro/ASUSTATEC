#include "proteccion.h"

Proteccion::Proteccion(){
    proteccion = 0;
}

Proteccion::Proteccion(std::string _nombre, std::string _descripcion, int _peso, int _proteccion):Item(_nombre, _descripcion, _peso){
    proteccion = _proteccion;
}

int Proteccion::getProteccion() const{
    return proteccion;
}

void Proteccion::setProteccion(int _proteccion){
    proteccion = _proteccion;
}