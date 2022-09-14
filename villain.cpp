#include "villain.h"

villain::villain(){
}

villain::villain(std::string nombre, int vida, int dano, int protection, Item* recompensa, int VIDAC):NPC(nombre, vida, dano, protection, VIDAC){
}

Item* villain::getRecompensa(){
    return recompensa;
}

void villain::setRecompensa(Item* _recompensa){
    recompensa = _recompensa;
}