#include "personaje.h"

Personaje::Personaje(){
    nombre = " ";
    vida = 0;
    habitacionActual;
    inventario;
    ataque = 0;
    dinero = 0;
    proteccion = 0;
}

Personaje::Personaje(std::string _nombre, int _vida, Habitacion* _habitacionActual, std::vector <Item*> _inventario, int _ataque, int _dinero, int _proteccion){
    nombre = _nombre;
    vida = _vida;
    habitacionActual = _habitacionActual;
    inventario = _inventario;
    ataque = _ataque;
    dinero = _dinero;
    proteccion = _proteccion;
}

std::string Personaje::getNombre() const{
    return nombre;
}

int Personaje::getVida() const{
    return vida;
}

/*Habitacion Personaje::getHabitacionActual() const{
    return habitacionActual;
}*/

std::vector <Item*> Personaje::getInventario() const{
    return inventario;
}

int Personaje::getAtaque() const{
    return ataque;
}

int Personaje::getDinero() const{
    return dinero;
}

int Personaje::getProteccion() const{
    return proteccion;
}

void Personaje::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Personaje::setVida(int _vida){
    vida = _vida;
}

/*void Personaje::setHabitacionActual(Habitacion* _habitacionActual){
    habitacionActual = _habitacionActual;
}*/

void Personaje::setInventario(Item* _inventario){
    inventario = _inventario;
}

void Personaje::setAtaque(int _ataque){
    ataque = _ataque;
}

void Personaje::setDinero(int _dinero){
    dinero = _dinero;
}

void Personaje::setProteccion(int _proteccion){
    proteccion = _proteccion;
}

/*void agregarItem(Item* _item){
    int item = _item + 1;
}

Item* Personaje::consultaItem(int) const{

}

bool Personaje::camina(std::string){

}*/

void Personaje::imprime(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Habitacion actual: " << habitacionActual << std::endl;
    std::cout << "Inventario: " << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Proteccion: " << proteccion << std::endl; 
}