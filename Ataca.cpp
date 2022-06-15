#include "Ataca.h"

Ataca::Ataca(Character* _personaje):Comando("Ataca", ""){
    Personaje = _personaje; 
}

void Ataca::ejecuta(){
    Enemigo = Personaje->getPosicion()->getNPC();
    int vidaN = Enemigo->getVida();
    std::cout << "\nFIGHT!!!!\n" << std::endl;
    std::cout << "Tu contricantes es: " << Enemigo->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Enemigo->getDano()) << "   " << "Protección: " << std::to_string(Enemigo->getProteccion()) << "\n" << std::endl;
    Ataca::imprimevidaNPC(Enemigo);
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    Ataca::imprimevida(Personaje);
    std::cout << "\n" << std::endl;
    std::cout << "Tu mero: " << Personaje->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Personaje->getAtaque()) << "   " << "Protección: " << std::to_string(Personaje->getProteccion()) << "\n" << std::endl;
}

void Ataca::imprimevidaNPC(NPC* npc){
    std::cout << std::to_string(npc->getVida()) << ":  ";
    for(int i = 0; i < npc->getVida(); i++){
        std::cout << "░";
    }
    std::cout << "\n";
}
void Ataca::imprimevida(Character* per){
    std::cout << std::to_string(per->getVida()) << ":  ";
    for(int i = 0; i < per->getVida(); i++){
        std::cout << "░";
    }
    std::cout << "\n";
}
