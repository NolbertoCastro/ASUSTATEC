#include "Villano.h"

Villano::Villano(){
}

Villano::Villano(std::string _nombre, int _vida, Room* _habitacionActual, int _ataque, int _dinero, int _proteccion, Item _recompensa):Character(_nombre, _vida, _habitacionActual, _ataque, _dinero, _proteccion){
    recompensa = _recompensa;
}

Item Villano::getRecompensa() const{
    return recompensa;
}

void Villano::setRecompensa(Item _recompensa){
    recompensa = _recompensa;
}

int Villano::ataca(){
    return 0;
    
}