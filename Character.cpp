#include "Character.h"

Character::Character(){
    setName(" ");
    setHealth(0);
    setPosition(actualRoom);
    setAttack(0);
    setMoney(0);
    setProtection(0);
    setHealthC(0);
}

Character::Character(std::string _name, int _health, Room* _actualRoom, int _attack, int _money, int _protection, int healthC){
    setName(_name);
    setHealth(_health);
    setPosition(_actualRoom);
    setAttack(_attack);
    setMoney(_money);
    setProtection(_protection);
    setHealthC(healthC);
}

std::string Character::getName() const{
    return name;
}

int Character::getHealth(){
    return health;
}

Room* Character::getPosition(){
    return actualRoom;
}

std::vector <Item*> Character::getInventory() const{
    return inventory;
}

int Character::getAttack() const{
    return attack;
}

int Character::getMoney() const{
    return money;
}

int Character::getProtection() const{
    return protection;
}

void Character::setName(std::string _name){
    name = _name;
}

void Character::setHealth(int _health){
    health = _health;
}

void Character::setPosition(Room* _actualRoom){
    actualRoom = _actualRoom;
}

void Character::setInventory(std::vector <Item*> _inventory){
    inventory = _inventory;
}

void Character::setAttack(int _attack){
    attack = _attack;
}

void Character::setMoney(int _money){
    money = _money;
}

void Character::setProtection(int _protection){
    protection = _protection;
}

void Character::addItem(Item* _item){
    int totalWeight = 0;
    for(int i =0; i < inventory.size(); i++){
        totalWeight += inventory[i]->getWeight();
    };
    totalWeight += _item->getWeight();
    if (totalWeight <= 20){
        inventory.push_back(_item);
    } else {
        std::cout << "The inventory is full, you can add an object of this weight" << std::endl;
    }
}

void Character::itemDescription(std::string item){
    for(int i =0; i < inventory.size(); i++){
        if (inventory[i]->getName() == item){
            inventory[i]->printItem();
        } 
    }
}

void Character::printInventory(){
    for(int i =0; i < inventory.size(); i++){
        inventory[i]->printItem();  
        std::cout << "\n<---------------------------->\n" << std::endl;  
    }
}

void Character::print(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Protection: " << protection << std::endl; 
    std::cout << "Actual Room: " << actualRoom << std::endl;
    std::cout << "Inventory: \n" << std::endl;
    Character::printInventory();
}

bool Character::searchItem(std::string item){
    for(int i=0; i< inventory.size(); i++){
        if (inventory[i]->getName()==item){
            return true;
        }
    }
    return false;
}

bool Character::move(std::string direction){
    Room* exit = actualRoom->getExit(direction);
    if (exit !=nullptr && !exit ->keyRequired()){
        setPosition(exit );
        return true;
    }
    else if (exit !=nullptr && exit ->keyRequired()){
        if (searchItem("Key")){
            setPosition(exit);
            return true;
        }
    }
    return false;
}
Item* Character::getItem(std::string name){
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getName() == name){
            return inventory[i];
        } else{
            std::cout << "You don't have an Item called " << name << std::endl;
        }
    }
}

void Character::deleteItem(std::string item){
    for (int i = 0; i < inventory.size(); i++){
        if (inventory[i]->getName() == item){
            auto elem_to_remove = inventory.begin() + i;
            if (elem_to_remove != inventory.end()) {
                inventory.erase(elem_to_remove);
            }
        }
    }
}

void Character::setHealthC(int _healthc){
    HealthC = _healthc;
}

int Character::getHealthC(){
    return HealthC;
}

int Character::operator + (Item* ItemAttack){
    int newAttack = attack + ItemAttack->execute();
    return newAttack;
}