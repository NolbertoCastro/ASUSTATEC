#include "Character.h"

Character::Character(){
    setNombre(" ");
    setVida(0);
    setPosicion(RoomActual);
    setAtaque(0);
    setDinero(0);
    setProteccion(0);
    setVIDAC(0);
}

Character::Character(std::string _nombre, int _vida, Room* _RoomActual, int _ataque, int _dinero, int _proteccion, int vidaC){
    setNombre(_nombre);
    setVida(_vida);
    setPosicion(_RoomActual);
    setAtaque(_ataque);
    setDinero(_dinero);
    setProteccion(_proteccion);
    setVIDAC(vidaC);
}

std::string Character::getNombre() const{
    return nombre;
}

int Character::getVida(){
    return vida;
}

Room* Character::getPosicion(){
    return RoomActual;
}

std::vector <Item*> Character::getinventory() const{
    return inventory;
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

void Character::setinventory(std::vector <Item*> _inventory){
    inventory = _inventory;
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
    for(int i =0; i < inventory.size(); i++){
        pesoacum += inventory[i]->getPeso();
    };
    pesoacum += _item->getPeso();
    if (pesoacum <= 20){
        inventory.push_back(_item);
    } else {
        std::cout << "El inventory esta lleno no puede aceptar otro objeto de ese peso" << std::endl;
    }
}

void Character::consultaItem(std::string item){
    for(int i =0; i < inventory.size(); i++){
        if (inventory[i]->getNombre() == item){
            inventory[i]->imprimirItem();
        } 
    }
}

void Character::imprimeinventory(){
    for(int i =0; i < inventory.size(); i++){
        inventory[i]->imprimirItem();  
        std::cout << "\n<---------------------------->\n" << std::endl;  
    }
}

void Character::imprime(){
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Proteccion: " << proteccion << std::endl; 
    std::cout << "Room actual: " << RoomActual << std::endl;
    std::cout << "inventory: \n" << std::endl;
    Character::imprimeinventory();
}

bool Character::buscaItem(std::string cosa){
    for(int i=0; i< inventory.size(); i++){
        if (inventory[i]->getNombre()==cosa){
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
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getNombre() == nombre){
            return inventory[i];
        } else{
            std::cout << "No cuento con un articulo de ese estilo" << std::endl;
        }
    }
}

void Character::expulsarItem(std::string item){
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getNombre() == item){
            auto elem_to_remove = inventory.begin() + i;
            if (elem_to_remove != inventory.end()) {
                inventory.erase(elem_to_remove);
            }
        }
    }
}

void Character::setVIDAC(int _vidac){
    VIDAC = _vidac;
}

int Character::getVIDAC(){
    return VIDAC;
}

int Character::operator + (Item* starwars){
    int regreso = ataque + starwars->ejecuta();
    return regreso;
}