#include "Ataca.h"

Ataca::Ataca(Character* _personaje):Command("Ataca", ""){
    Personaje = _personaje; 
}

void Ataca::execute(){
    Ataca::setAtributos();
    system("clear");
    std::cout << "\nFIGHT!!!!\n" << std::endl;
    std::cout << "Tu contricante es: " << Enemigo->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Enemigo->getDano()) << "   " << "Protección: " << std::to_string(Enemigo->getProteccion()) << "\n" << std::endl;
    Enemigo->setVida((Enemigo->getVida()- Personaje->getAtaque()));
    Ataca::imprimevidaNPC(Enemigo);
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    Ataca::enemigoAtaca();
    Ataca::imprimevida(Personaje);
    std::cout << "\n" << std::endl;
    std::cout << "Tu mero: " << Personaje->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Personaje->getAtaque()) << "   " << "Protección: " << std::to_string(Personaje->getProteccion()) << "\n" << std::endl;
    if (Enemigo->getVida() <= 0){
        std::cout << "Muchas Felicidades has vencido a " << Enemigo->getNombre() << " en recompensa te damos el siguiente premio:" << std::endl;
        Enemigo->getRecompensa()->imprimirItem();
        Enemigo->setVida(Enemigo->getVIDAC());
        Personaje->agregarItem(Enemigo->getRecompensa());
        std::cout << "Puedes ver este item en tu inventory usando el Command inventory" << std::endl;
    }
}


void Ataca::imprimevidaNPC(NPC* npc){
    std::cout << npc->getVIDAC() << "/" << std::to_string(npc->getVida()) << ":  ";
    for(int i = 0; i < npc->getVida(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (npc->getVIDAC()-npc->getVida()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}
void Ataca::imprimevida(Character* per){
    std::cout << per->getVIDAC() << "/" <<std::to_string(per->getVida()) << ":  ";
    for(int i = 0; i < per->getVida(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (per->getVIDAC()-per->getVida()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}

void Ataca::setAtributos(){
    Enemigo = Personaje->getPosicion()->getNPC();
}

void Ataca::enemigoAtaca(){
    srand(time(NULL));
    int Atacar = 0 + rand() % (1 - 0 + 1);
    if (Atacar == 1){
        Personaje->setVida(Personaje->getVida()-Enemigo->getDano());
    }
}