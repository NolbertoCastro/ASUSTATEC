#include "inventory.h"

inventory::inventory(Character* personaje):Command("printMapa", ""){
    Personaje = personaje;
}

void inventory::execute(){
    std::cout << "\n<---------inventory--------->\n" << std::endl;
    Personaje->printInventory();
}