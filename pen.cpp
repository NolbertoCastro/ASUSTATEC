#include "pen.h"

pen::pen(){
    setName("pen");
    setdescription("Usala para tener más daño");
    setPeso(4);
    setExtra(3);
}

pen::pen(std::string _name, std::string _description, int _peso, int _extraDanio):Item(_name, _description, _peso){
    setExtra(_extraDanio);
}

void pen::setExtra(int _extraDanio){
    extraDanio = _extraDanio;
}

int pen::ejecuta(){
    return extraDanio;
}