#include "Villano.h"

Villano::Villano(){
}

Villano::Villano(std::string nombre, int vida, int dano, int proteccion, Item* recompensa):NPC(nombre, vida, dano, proteccion){
    setNombre(nombre);
    setVida(vida);
    setDano(dano);
    setProteccion(proteccion);
}

Item* Villano::getRecompensa(){
    return recompensa;
}

void Villano::setRecompensa(Item* _recompensa){
    recompensa = _recompensa;
}