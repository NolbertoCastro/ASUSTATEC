#include "NPC.h"

NPC::NPC(){
    setName("Carlos");
    setHealth(10);
    setDamage(1);
    setProtection(1);
    setHealthC(10);
}

NPC::NPC(std::string name, int health, int damage, int protection, int _healthc){
    setName(name);
    setHealth(health);
    setDamage(damage);
    setProtection(protection);
    setHealthC(_healthc);
}
void NPC::setName(std::string _name){
    name = _name;
}
void NPC::setDamage(int attack){
    damage = attack;
}
void NPC::setHealth(int _health){
    health = _health;
}
void NPC::setProtection(int _protec){
    protection = _protec;
}

std::string NPC::getName(){
    return name;
}
int NPC::getDamage(){
    return damage;
}
int NPC::getHealth(){
    return health;
}
int NPC::getProtection(){
    return protection;
}

Item* NPC::getReward(){
    return reward;
}

void NPC::setReward(Item* _reward){
    reward = _reward;
}

void NPC::setHealthC(int healthc){
    HealthC = healthc;
}

int NPC::getHealthC(){
    return HealthC;
}