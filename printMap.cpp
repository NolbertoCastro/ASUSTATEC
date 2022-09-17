#include "printMap.h"

printMap::printMap(Character* _Player):Command("printMap", ""){
    Player = _Player;
}

void printMap::execute(){
    std::cout << "\n***************" << std::endl;
    std::cout << "*░░░**░░░**░░░*" << std::endl;
    std::cout << "*░O░░░░3░░░░E░*" << std::endl;
    std::cout << "*░░░**░░░**░░░*" << std::endl;
    std::cout << "******░░░******" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "*░C░░░░2░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "******░░░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "*░W░░░░1░*" << std::endl;
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

    std::cout << "You're in the room: " << Player->getPosition()->getDescription() << std::endl;
}
