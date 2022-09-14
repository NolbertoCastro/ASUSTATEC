#include "moveCommand.h"

moveCommand::moveCommand(Character* personaje):Command("move", ""){
    jugador=personaje;
}

void moveCommand::execute(){
    if (!tieneprompt()){
        std::cout<<"A donde quieres ir?... sin direccion no puedo helprte..." << std::endl;
    }
    else{
        std::string direc = getprompt();
        if (jugador->move(direc)){
            Room* actual=jugador->getPosition();
            std::cout << "Te has movido hacia el " << direc << std::endl;
            std::cout << "Ahora estas en: " << actual->getDescription() << std::endl;
        }
        else{
            std::cout << "No hay salida en esa direccion o no tienes la llave para abrir, busca otra salida... o la llave..." << std::endl;
        }
    }
}