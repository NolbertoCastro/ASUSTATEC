#include "moveCommand.h"

moveCommand::moveCommand(Character* personaje):Command("move", ""){
    jugador=personaje;
}

void moveCommand::execute(){
    if (!tieneSegPalabra()){
        std::cout<<"A donde quieres ir?... sin direccion no puedo helprte..." << std::endl;
    }
    else{
        std::string direc = getSegPalabra();
        if (jugador->camina(direc)){
            Room* actual=jugador->getPosicion();
            std::cout << "Te has movido hacia el " << direc << std::endl;
            std::cout << "Ahora estas en: " << actual->getDescripcion() << std::endl;
        }
        else{
            std::cout << "No hay salida en esa direccion o no tienes la llave para abrir, busca otra salida... o la llave..." << std::endl;
        }
    }
}