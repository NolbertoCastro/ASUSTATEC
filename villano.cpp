#include "villano.h"

Villano::Villano(){
    recompensa;
}

Villano::Villano(std::string _nombre, int _vida, Habitacion* _habitacionActual, std::vector <Item*> _inventario, int _ataque, int _dinero, int _proteccion, Item _recompensa):Personaje(_nombre, _vida, _habitacionActual, _inventario, _ataque, _dinero, _proteccion){
    recompensa = _recompensa;
}

Item Villano::getRecompensa() const{
    return recompensa;
}

void Villano::setRecompensa(Item _recompensa){
    recompensa = _recompensa;
}

int Villano::ataca(){
    
}