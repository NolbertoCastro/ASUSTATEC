#include "attack.h"

attack::attack(Character* _personaje):Command("attack", ""){
    Personaje = _personaje; 
}

void attack::execute(){
    attack::setAtributos();
    system("clear");
    std::cout << "\nFIGHT!!!!\n" << std::endl;
    std::cout << "Tu contricante es: " << Enemigo->getName() << std::endl;
    std::cout << "Daño: " << std::to_string(Enemigo->getDano()) << "   " << "Protección: " << std::to_string(Enemigo->getProtection()) << "\n" << std::endl;
    Enemigo->setHealth((Enemigo->getHealth()- Personaje->getAttack()));
    attack::printHealthNPC(Enemigo);
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    attack::enemigoattack();
    attack::printHealth(Personaje);
    std::cout << "\n" << std::endl;
    std::cout << "Tu mero: " << Personaje->getName() << std::endl;
    std::cout << "Daño: " << std::to_string(Personaje->getAttack()) << "   " << "Protección: " << std::to_string(Personaje->getProtection()) << "\n" << std::endl;
    if (Enemigo->getHealth() <= 0){
        std::cout << "Muchas Felicidades has vencido a " << Enemigo->getName() << " en recompensa te damos el siguiente premio:" << std::endl;
        Enemigo->getRecompensa()->printItem();
        Enemigo->setHealth(Enemigo->getHealthC());
        Personaje->addItem(Enemigo->getRecompensa());
        std::cout << "Puedes ver este item en tu inventory usando el Command inventory" << std::endl;
    }
}


void attack::printHealthNPC(NPC* npc){
    std::cout << npc->getHealthC() << "/" << std::to_string(npc->getHealth()) << ":  ";
    for(int i = 0; i < npc->getHealth(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (npc->getHealthC()-npc->getHealth()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}
void attack::printHealth(Character* per){
    std::cout << per->getHealthC() << "/" <<std::to_string(per->getHealth()) << ":  ";
    for(int i = 0; i < per->getHealth(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (per->getHealthC()-per->getHealth()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}

void attack::setAtributos(){
    Enemigo = Personaje->getPosition()->getNPC();
}

void attack::enemigoattack(){
    srand(time(NULL));
    int attackr = 0 + rand() % (1 - 0 + 1);
    if (attackr == 1){
        Personaje->setHealth(Personaje->getHealth()-Enemigo->getDano());
    }
}