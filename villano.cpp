#include "Villano.h"

Villano::Villano(){
}

Villano::Villano(std::string nombre, int vida, int dano, int protection, Item* recompensa, int VIDAC):NPC(nombre, vida, dano, protection, VIDAC){
}

Item* Villano::getRecompensa(){
    return recompensa;
}

void Villano::setRecompensa(Item* _recompensa){
    recompensa = _recompensa;
}