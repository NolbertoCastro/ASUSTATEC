#include "protection.h"

protection::protection(){
    protectionValue = 0;
}

protection::protection(std::string _name, std::string _description, int _weight, int _protection):Item(_name, _description, _weight){
    protectionValue = _protection;
}

int protection::getProtection() const{
    return protectionValue;
}

void protection::setProtection(int _protection){
    protectionValue = _protection;
}