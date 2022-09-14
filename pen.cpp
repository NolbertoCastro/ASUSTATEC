#include "pen.h"

pen::pen(){
    setNombre("pen");
    setDescripcion("Usala para tener más daño");
    setPeso(4);
    setExtra(3);
}

pen::pen(std::string _nombre, std::string _descripcion, int _peso, int _extraDanio):Item(_nombre, _descripcion, _peso){
    setExtra(_extraDanio);
}

void pen::setExtra(int _extraDanio){
    extraDanio = _extraDanio;
}

int pen::ejecuta(){
    return extraDanio;
}