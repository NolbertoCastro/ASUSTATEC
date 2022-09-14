#include "Comerciante.h"

Comerciante::Comerciante(std::string nombre, int vida, int dano, int proteccion, int VIDAC):NPC(nombre, vida, dano, proteccion, VIDAC){
}

Item* Comerciante::getItem(std::string nombre){
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getNombre() == nombre){
            return inventory[i];
        } else{
            std::cout << "No cuento con un articulo de ese estilo" << std::endl;
        }
    }
    return nullptr;
}

void Comerciante::agregaItem(Item* cosa){
    inventory.push_back(cosa);
}