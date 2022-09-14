#include "protection.h"

protection::protection(){
    protection = 0;
}

protection::protection(std::string _nombre, std::string _descripcion, int _peso, int _protection):Item(_nombre, _descripcion, _peso){
    protection = _protection;
}

int protection::getprotection() const{
    return protection;
}

void protection::setprotection(int _protection){
    protection = _protection;
}