#include "Pluma.h"

Pluma::Pluma(){
    setNombre("Pluma");
    setDescripcion("Usala para tener más daño");
    setPeso(4);
    setExtra(3);
}

Pluma::Pluma(std::string _nombre, std::string _descripcion, int _peso, int _extraDanio):Item(_nombre, _descripcion, _peso){
    setExtra(_extraDanio);
}

void Pluma::setExtra(int _extraDanio){
    extraDanio = _extraDanio;
}

int Pluma::ejecuta(){
    return extraDanio;
}