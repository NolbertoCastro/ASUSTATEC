#include "Character.h"

Character::Character(){
    setNombre(" ");
    setVida(0);
    setPosicion(RoomActual);
    setAtaque(0);
    setDinero(0);
    setProteccion(0);
}

Character::Character(std::string _nombre, int _vida, Room* _RoomActual, int _ataque, int _dinero, int _proteccion){
    setNombre(_nombre);
    setVida(_vida);
    setPosicion(_RoomActual);
    setAtaque(_ataque);
    setDinero(_dinero);
    setProteccion(_proteccion);
}

std::string Character::getNombre() const{
    return nombre;
}

int Character::getVida() const{
    return vida;
}

Room* Character::getPosicion(){
    return RoomActual;
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

void Character::setPosicion(Room* _RoomActual){
    RoomActual = _RoomActual;
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

void Character::consultaItem(std::string item){
    for(int i =0; i < inventario.size(); i++){
        if (inventario[i]->getNombre() == item){
            inventario[i]->imprimirItem();
        } 
    }
}

void Character::imprimeInventario(){
    for(int i =0; i < inventario.size(); i++){
        inventario[i]->imprimirItem();  
        std::cout << "\n<---------------------------->\n" << std::endl;  
    }
}

void Character::imprime(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Proteccion: " << proteccion << std::endl; 
    std::cout << "Room actual: " << RoomActual << std::endl;
    std::cout << "Inventario: \n" << std::endl;
    Character::imprimeInventario();
}

bool Character::buscaItem(std::string cosa){
    for(int i=0; i< inventario.size(); i++){
        if (inventario[i]->getNombre()==cosa){
            return true;
        }
    }
    return false;
}

bool Character::camina(std::string dir){
    Room* voyA= RoomActual->getSalida(dir);
    if (voyA!=nullptr && !voyA->requiereLlave()){
        setPosicion(voyA);
        return true;
    }
    else if (voyA!=nullptr && voyA->requiereLlave()){
        if (buscaItem("Llave")){
            setPosicion(voyA);
            return true;
        }
    }
    return false;
}
Item* Character::getItem(std::string nombre){
    for (int i = 0; i < inventario.size(); i++){
        if (inventario[i]->getNombre() == nombre){
            return inventario[i];
        } else{
            std::cout << "No cuento con un articulo de ese estilo" << std::endl;
        }
    }
}