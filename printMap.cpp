#include "printMap.h"

printMap::printMap(Character* personaje):Command("printMap", ""){
    Personaje = personaje;
}

void printMap::execute(){
    std::cout << "\n***************" << std::endl;
    std::cout << "*░░░**░░░**░░░*" << std::endl;
    std::cout << "*░O░░░░3░░░░E░*" << std::endl;
    std::cout << "*░░░**░░░**░░░*" << std::endl;
    std::cout << "******░░░******" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "*░S░░░░2░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "******░░░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "*░B░░░░1░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "**********\n" << std::endl;
    // std::cout << "*░░░**░░░*" << std::endl;
    // std::cout << "*░4░░░░░░*" << std::endl;
    // std::cout << "*░░░**░░░*" << std::endl;
    // std::cout << "******░░░*" << std::endl;
    // std::cout << "*░░░**░░░*" << std::endl;
    // std::cout << "*░5░░░░░░*" << std::endl;
    // std::cout << "*░░░**░░░*" << std::endl;
    // std::cout << "**********" << std::endl;

    std::cout << "You're in the room: " << Personaje->getPosicion()->getDescripcion() << std::endl;
}
