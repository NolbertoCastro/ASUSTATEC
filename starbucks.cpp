#include "Starbucks.h"

Starbucks::Starbucks(){
    setName("Starbucks");
    setweight(3);
    setSanacion(15);
    setdescription("Te brinda más health y te da calor");
}

Starbucks::Starbucks(std::string _name, std::string _description, int _weight, int _sanacion):Item(_name, _description, _weight){
    sanacion = _sanacion;
}

void Starbucks::setSanacion(int _sanacion){
    sanacion = _sanacion;
}

int Starbucks::ejecuta(){
    return sanacion;
}