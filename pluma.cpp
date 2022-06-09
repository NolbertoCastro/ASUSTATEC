#include "pluma.h"

Pluma::Pluma(){
    setExtra(0);
}

Pluma::Pluma(std::string _nombre, std::string _descripcion, int _peso, int _extraDanio):Item(_nombre, _descripcion, _peso){
    setExtra(_extraDanio);
}

int Pluma::getExtraDanio(){
    return extraDanio;
}

void Pluma::setExtra(int _extraDanio){
    extraDanio = _extraDanio;
}