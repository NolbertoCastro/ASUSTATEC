#include "NPC.h"

NPC::NPC(){
    setNombre("Carlos");
    setVida(10);
    setDano(1);
    setProteccion(1);
    setVIDAC(10);
}

NPC::NPC(std::string nombre, int vida, int dano, int proteccion, int _vidac){
    setNombre(nombre);
    setVida(vida);
    setDano(dano);
    setProteccion(proteccion);
    setVIDAC(_vidac);
}
void NPC::setNombre(std::string _nombre){
    nombre = _nombre;
}
void NPC::setDano(int ataque){
    dano = ataque;
}
void NPC::setVida(int _vida){
    vida = _vida;
}
void NPC::setProteccion(int _protec){
    proteccion = _protec;
}

std::string NPC::getNombre(){
    return nombre;
}
int NPC::getDano(){
    return dano;
}
int NPC::getVida(){
    return vida;
}
int NPC::getProteccion(){
    return proteccion;
}

Item* NPC::getRecompensa(){
    return Recompensa;
}

void NPC::setRecompensa(Item* _recomp){
    Recompensa = _recomp;
}

void NPC::setVIDAC(int vidac){
    VIDAC = vidac;
}

int NPC::getVIDAC(){
    return VIDAC;
}