#include "helpCommand.h"

helpCommand::helpCommand(ListaPalabras* palabras):Command("help", ""){
    validas=palabras;
}

void helpCommand::execute(){
    std::cout<< "¿Estas perdido?, dejame te muestros los command disponibles que tienes" << std::endl;
    std::cout << "Los command que tienes son:" << std::endl;
    std::cout << validas->todosLoscommand() << std::endl;
}