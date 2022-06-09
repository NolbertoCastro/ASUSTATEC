#include "Character.h"
#include <vector>

Character::Character(){
    nombre = " ";
    vida = 0;
    habitacionActual;
    inventario;
    ataque = 0;
    dinero = 0;
    proteccion = 0;
}

Character::Character(std::string _nombre, int _vida, Habitacion* _habitacionActual, std::vector <Item*> _inventario, int _ataque, int _dinero, int _proteccion){
    nombre = _nombre;
    vida = _vida;
    habitacionActual = _habitacionActual;
    inventario = _inventario;
    ataque = _ataque;
    dinero = _dinero;
    proteccion = _proteccion;
}

std::string Character::getNombre() const{
    return nombre;
}

int Character::getVida() const{
    return vida;
}

/*Habitacion Character::getHabitacionActual() const{
    return habitacionActual;
}*/

std::vector <Item*> Character::getInventario() const{
    return inventario;
}

int Character::getAtaque() const{
    return ataque;
}

int Character::getDinero() const{
    return dinero;
}

int Character::getProteccion() const{
    return proteccion;
}

void Character::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Character::setVida(int _vida){
    vida = _vida;
}

void Character::setHabitacionActual(Habitacion* _habitacionActual){
    habitacionActual = _habitacionActual;
}

void Character::setInventario(std::vector <Item*> _inventario){
    inventario = _inventario;
}

void Character::setAtaque(int _ataque){
    ataque = _ataque;
}

void Character::setDinero(int _dinero){
    dinero = _dinero;
}

void Character::setProteccion(int _proteccion){
    proteccion = _proteccion;
}

void Character::agregarItem(Item* _item){
    inventario.push_back(_item);
}

Item* Character::consultaItem(int) const{

}

bool Character::camina(std::string){

}

// void Character::imprime(){
//     std::cout << "Nombre: " << nombre << std::endl;
//     std::cout << "Vida: " << vida << std::endl;
//     std::cout << "Habitacion actual: " << habitacionActual << std::endl;
//     std::cout << "Inventario: " << std::endl;
//     std::cout << "Ataque: " << ataque << std::endl;
//     std::cout << "Proteccion: " << proteccion << std::endl; 
// }