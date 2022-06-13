#include "DesplazaComando.h"

DesplazaComando::DesplazaComando(Character* personaje):Comando("desplaza", ""){
    jugador=personaje;
}

void DesplazaComando::ejecuta(){
    if (!tieneSegPalabra()){
        std::cout<<"A donde quieres ir?... sin direccion no puedo ayudarte..." << std::endl;
    }
    else{
        std::string direc = getSegPalabra();
        if (jugador->setposicion(direc) != nullptr){
            Room* actual=jugador->getposicion();
            std::cout << "Te has movido hacia el " << direc << std::endl;
            std::cout << "Ahora estas en: " << actual->getDescripcion() << std::endl;
        }
        else{
            std::cout << "No hay salida en esa direccion o no tienes la llave para abrir, busca otra salida... o la llave..." << std::endl;
        }
    }
}