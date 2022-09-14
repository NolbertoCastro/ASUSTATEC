#include "attack.h"

attack::attack(Character* _personaje):Command("attack", ""){
    Personaje = _personaje; 
}

void attack::execute(){
    attack::setAtributos();
    system("clear");
    std::cout << "\nFIGHT!!!!\n" << std::endl;
    std::cout << "Tu contricante es: " << Enemigo->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Enemigo->getDano()) << "   " << "Protección: " << std::to_string(Enemigo->getprotection()) << "\n" << std::endl;
    Enemigo->setVida((Enemigo->getVida()- Personaje->getAtaque()));
    attack::imprimevidaNPC(Enemigo);
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    attack::enemigoattack();
    attack::imprimevida(Personaje);
    std::cout << "\n" << std::endl;
    std::cout << "Tu mero: " << Personaje->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Personaje->getAtaque()) << "   " << "Protección: " << std::to_string(Personaje->getprotection()) << "\n" << std::endl;
    if (Enemigo->getVida() <= 0){
        std::cout << "Muchas Felicidades has vencido a " << Enemigo->getNombre() << " en recompensa te damos el siguiente premio:" << std::endl;
        Enemigo->getRecompensa()->imprimirItem();
        Enemigo->setVida(Enemigo->getVIDAC());
        Personaje->agregarItem(Enemigo->getRecompensa());
        std::cout << "Puedes ver este item en tu inventory usando el Command inventory" << std::endl;
    }
}


void attack::imprimevidaNPC(NPC* npc){
    std::cout << npc->getVIDAC() << "/" << std::to_string(npc->getVida()) << ":  ";
    for(int i = 0; i < npc->getVida(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (npc->getVIDAC()-npc->getVida()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}
void attack::imprimevida(Character* per){
    std::cout << per->getVIDAC() << "/" <<std::to_string(per->getVida()) << ":  ";
    for(int i = 0; i < per->getVida(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (per->getVIDAC()-per->getVida()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}

void attack::setAtributos(){
    Enemigo = Personaje->getPosicion()->getNPC();
}

void attack::enemigoattack(){
    srand(time(NULL));
    int attackr = 0 + rand() % (1 - 0 + 1);
    if (attackr == 1){
        Personaje->setVida(Personaje->getVida()-Enemigo->getDano());
    }
}