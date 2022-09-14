#include "Parser.h"

Parser::Parser(){
    comandos=new ListaPalabras;
}


ListaPalabras* Parser::getComandos(){
    return comandos;
}

Comando* Parser::generaComando(){
    
    std::string instruccion, primera, segunda;
    std::cout << ">>>>";
    std::getline(std::cin, instruccion);
    std::stringstream sstr(instruccion);
    sstr >> primera;
    sstr >> segunda;
    sstr.ignore();

    // Excepción si el comando es erroneo
    try  {
       Comando* com=comandos->getComando(primera);
       if(com){
        com->setSegPalabra(segunda);
        return com;
       } else {
        throw com;
       }
    }
    catch (Comando* error)  {
        std::cout << "Ingresaste un valor erroneo\n";
        std::cout << "Ingresa un comando valido por favor\n";
    }
}
