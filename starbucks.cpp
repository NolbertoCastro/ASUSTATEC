#include "Starbucks.h"

Starbucks::Starbucks(){
    setName("Starbucks");
    setWeight(3);
    setHealing(15);
    setDescription("It gives you more Health and is hot");
}

Starbucks::Starbucks(std::string _name, std::string _description, int _weight, int _healing):Item(_name, _description, _weight){
    healing = _healing;
}

void Starbucks::setHealing(int _healing){
    healing = _healing;
}

int Starbucks::execute(){
    return healing;
}