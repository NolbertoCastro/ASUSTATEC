#include "ImprimeMapa.h"

ImprimeMapa::ImprimeMapa(Character* personaje):Comando("ImprimeMapa", ""){
    Personaje = personaje;
}

void ImprimeMapa::ejecuta(){
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

    std::cout << "Estas en el cuarto: " << Personaje->getPosicion()->getDescripcion() << std::endl;
}
