#include "seller.h"

seller::seller(std::string name, int health, int damage, int protection, int HealthC):NPC(name, health, damage, protection, HealthC){
}

Item* seller::getItem(std::string name){
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getName() == name){
            return inventory[i];
        } else{
            std::cout << "there's no item like that" << std::endl;
        }
    }
    return nullptr;
}

void seller::addItem(Item* item){
    inventory.push_back(item);
}