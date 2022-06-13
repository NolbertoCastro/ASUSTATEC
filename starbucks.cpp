#include "Starbucks.h"

Starbucks::Starbucks(){
    setNombre("Starbucks");
    setDescripcion("Con un buen cafe todo es mejor, obtienes +30 de vida");
    setPeso(4);
    sanacion = 30;
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