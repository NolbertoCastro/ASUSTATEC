#include "pen.h"

pen::pen(){
    setName("pen");
    setDescription("Use it to obtain more Damage");
    setWeight(4);
    setMoreDamage(3);
}

pen::pen(std::string _name, std::string _description, int _weight, int _moreDamage):Item(_name, _description, _weight){
    setMoreDamage(_moreDamage);
}

void pen::setMoreDamage(int _moreDamage){
    moreDamage = _moreDamage;
}

int pen::ejecuta(){
    return moreDamage;
}