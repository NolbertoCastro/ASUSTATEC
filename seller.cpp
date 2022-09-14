#include "seller.h"

seller::seller(std::string nombre, int vida, int dano, int protection, int VIDAC):NPC(nombre, vida, dano, protection, VIDAC){
}

Item* seller::getItem(std::string nombre){
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getNombre() == nombre){
            return inventory[i];
        } else{
            std::cout << "No cuento con un articulo de ese estilo" << std::endl;
        }
    }
    return nullptr;
}

void seller::agregaItem(Item* cosa){
    inventory.push_back(cosa);
}