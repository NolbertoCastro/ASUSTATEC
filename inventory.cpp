#include "inventory.h"

inventory::inventory(Character* Player):Command("printMapa", ""){
    Player = Player;
}

void inventory::execute(){
    std::cout << "\n<---------Inventory--------->\n" << std::endl;
    Player->printInventory();
}