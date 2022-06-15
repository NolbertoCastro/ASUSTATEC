#include "Comerciante.h"

Comerciante::Comerciante(std::string nombre, int vida, int dano, int proteccion):NPC(nombre, vida, dano, proteccion){
}

Item* Comerciante::getItem(std::string nombre){
    for (int i = 0; i < Inventario.size(); i++){
        if (Inventario[i]->getNombre() == nombre){
            return Inventario[i];
        } else{
            std::cout << "No cuento con un articulo de ese estilo" << std::endl;
        }
    }
    return nullptr;
}

void Comerciante::agregaItem(Item* cosa){
    Inventario.push_back(cosa);
}