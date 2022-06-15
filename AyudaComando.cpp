#include "AyudaComando.h"

AyudaComando::AyudaComando(ListaPalabras* palabras):Comando("Ayuda", ""){
    validas=palabras;
}

void AyudaComando::ejecuta(){
    std::cout<< "¿Estas perdido?, dejame te muestros los comandos disponibles que tienes" << std::endl;
    std::cout << "Los comandos que tienes son:" << std::endl;
    std::cout << validas->todosLosComandos() << std::endl;
}