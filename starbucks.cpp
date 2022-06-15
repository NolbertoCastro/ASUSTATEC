#include "Starbucks.h"

Starbucks::Starbucks(){
    setNombre("Starbucks");
    setPeso(3);
    sanacion = 0;
    setDescripcion("Te brinda más vida y te da calor");
}

Starbucks::Starbucks(std::string _nombre, std::string _descripcion, int _peso, int _sanacion):Item(_nombre, _descripcion, _peso){
    sanacion = _sanacion;
}

int Starbucks::getSanacion() const{
    return sanacion;
}

void Starbucks::setSanacion(int _sanacion){
    sanacion = _sanacion;
}