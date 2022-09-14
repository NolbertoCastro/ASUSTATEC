#include "villain.h"

villain::villain(){
}

villain::villain(std::string name, int health, int damage, int protection, Item* reward, int HealthC):NPC(name, health, damage, protection, HealthC){
}

Item* villain::getReward(){
    return reward;
}

void villain::setReward(Item* _recompensa){
    reward = _recompensa;
}