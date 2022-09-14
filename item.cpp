#include "item.h"

Item::Item(){
    name = " ";
    description = " ";
    weight = 0;
}

Item::Item(std::string _name, std::string _description, int _weight){
    name = _name;
    description = _description;
    weight = _weight;
}

std::string Item::getDescription() const{
    return description;
}

std::string Item::getName() const{
    return name;
}

int Item::getWeight() const{
    return weight;
}

void Item::setDescription(std::string _description){
    description = _description;
}

void Item::setName(std::string _name){
    name = _name;
}

void Item::setWeight(int _weight){
    weight = _weight;
}

void Item::printItem(){
    std::cout << name << ", Weight: " << weight << std::endl;
    std::cout << "Description: " << description << std::endl;
}

int Item::execute(){return 0;}