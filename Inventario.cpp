#include "Inventario.h"

Inventario::Inventario(Character* personaje):Comando("ImprimeMapa", ""){
    Personaje = personaje;
}

void Inventario::ejecuta(){
    std::cout << "<---------INVENTARIO--------->\n" << std::endl;
    Personaje->imprimeInventario();
}