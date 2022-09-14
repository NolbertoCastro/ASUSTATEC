#include "Starbucks.h"

Starbucks::Starbucks(){
    setName("Starbucks");
    setPeso(3);
    setSanacion(15);
    setdescription("Te brinda más health y te da calor");
}

Starbucks::Starbucks(std::string _name, std::string _description, int _peso, int _sanacion):Item(_name, _description, _peso){
    sanacion = _sanacion;
}

void Starbucks::setSanacion(int _sanacion){
    sanacion = _sanacion;
}

int Starbucks::ejecuta(){
    return sanacion;
}