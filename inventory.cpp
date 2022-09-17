#include "inventory.h"

inventory::inventory(Character* _Player):Command("printMap", ""){
    Player = _Player;
}

void inventory::execute(){
    std::cout << "\n<---------Inventory--------->\n" << std::endl;
    Player->printInventory();
}