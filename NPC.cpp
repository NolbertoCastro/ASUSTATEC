#include "NPC.h"

NPC::NPC(){
    setName("Carlos");
    setHealth(10);
    setDano(1);
    setProtection(1);
    setHealthC(10);
}

NPC::NPC(std::string name, int health, int dano, int protection, int _healthc){
    setName(name);
    setHealth(health);
    setDano(dano);
    setProtection(protection);
    setHealthC(_healthc);
}
void NPC::setName(std::string _name){
    name = _name;
}
void NPC::setDano(int attack){
    dano = attack;
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
int NPC::getDano(){
    return dano;
}
int NPC::getHealth(){
    return health;
}
int NPC::getProtection(){
    return protection;
}

Item* NPC::getRecompensa(){
    return Recompensa;
}

void NPC::setRecompensa(Item* _recomp){
    Recompensa = _recomp;
}

void NPC::setHealthC(int healthc){
    HealthC = healthc;
}

int NPC::getHealthC(){
    return HealthC;
}