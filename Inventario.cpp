#include "Inventario.h"

Inventario::Inventario(Character* personaje):Command("ImprimeMapa", ""){
    Personaje = personaje;
}

void Inventario::execute(){
    std::cout << "\n<---------INVENTARIO--------->\n" << std::endl;
    Personaje->imprimeInventario();
}