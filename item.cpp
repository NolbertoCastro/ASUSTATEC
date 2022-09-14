#include "Item.h"

Item::Item(){
    nombre = " ";
    descripcion = " ";
    peso = 0;
}

Item::Item(std::string _nombre, std::string _descripcion, int _peso){
    nombre = _nombre;
    descripcion = _descripcion;
    peso = _peso;
}

std::string Item::getDescripcion() const{
    return descripcion;
}

std::string Item::getNombre() const{
    return nombre;
}

int Item::getPeso() const{
    return peso;
}

void Item::setDescripcion(std::string _descripcion){
    descripcion = _descripcion;
}

void Item::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Item::setPeso(int _peso){
    peso = _peso;
}

void Item::imprimirItem(){
    std::cout << nombre << ", Peso: " << peso << std::endl;
    std::cout << "Descripción: " << descripcion << std::endl;
}

int Item::execute(){return 0;}