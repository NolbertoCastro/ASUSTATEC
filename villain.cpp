#include "villain.h"

villain::villain(){
}

villain::villain(std::string name, int health, int dano, int protection, Item* recompensa, int HealthC):NPC(name, health, dano, protection, HealthC){
}

Item* villain::getRecompensa(){
    return recompensa;
}

void villain::setRecompensa(Item* _recompensa){
    recompensa = _recompensa;
}