#include "Character.h"

Character::Character(){
    setNombre(" ");
    setVida(0);
    setHabitacionActual(habitacionActual);
    setInventario(inventario);
    setAtaque(0);
    setDinero(0);
    setProteccion(0);
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

Habitacion* Character::getHabitacionActual(){
    return habitacionActual;
}

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
    int pesoacum = 0;
    for(int i =0; i < inventario.size(); i++){
        pesoacum += inventario[i]->getPeso();
    };
    pesoacum += _item->getPeso();
    if (pesoacum <= 20){
        inventario.push_back(_item);
    } else {
        std::cout << "El inventario esta lleno no puede aceptar otro objeto de ese peso" << std::endl;
    }
}

Item* Character::consultaItem(int) const{

}

void Character::imprimeInventario(){
    for(int i =0; i < inventario.size(); i++){
        inventario[i]->imprimirItem();    
    }
}

void Character::imprime(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Proteccion: " << proteccion << std::endl; 
    std::cout << "Habitacion actual: " << habitacionActual << std::endl;
    std::cout << "Inventario: \n" << std::endl;
    Character::imprimeInventario();
}