#include "Ataca.h"

Ataca::Ataca(Character* _personaje):Comando("Ataca", ""){
    Personaje = _personaje; 
}

void Ataca::ejecuta(){
    Ataca::setAtributos();
    std::cout << "\nFIGHT!!!!\n" << std::endl;
    std::cout << "Tu contricante es: " << Enemigo->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Enemigo->getDano()) << "   " << "Protección: " << std::to_string(Enemigo->getProteccion()) << "\n" << std::endl;
    Enemigo->setVida((Enemigo->getVida()- Personaje->getAtaque()));
    Ataca::imprimevidaNPC(Enemigo);
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    Ataca::imprimevida(Personaje);
    std::cout << "\n" << std::endl;
    std::cout << "Tu mero: " << Personaje->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Personaje->getAtaque()) << "   " << "Protección: " << std::to_string(Personaje->getProteccion()) << "\n" << std::endl;
    if (Enemigo->getVida() <= 0){
        std::cout << "Muchas Felicidades has vencido a Teus Satanico, en recompensa te damos el siguiente premio:" << std::endl;
        Enemigo->getRecompensa()->imprimirItem();
        Personaje->agregarItem(Enemigo->getRecompensa());
        std::cout << "Puedes ver este item en tu inventario usando el comando Inventario" << std::endl;
    }
}


void Ataca::imprimevidaNPC(NPC* npc){
    std::cout << vidaE << "/" << std::to_string(npc->getVida()) << ":  ";
    for(int i = 0; i < npc->getVida(); i++){
        std::cout << "◼︎";
    }
    std::cout << "\n";
}
void Ataca::imprimevida(Character* per){
    std::cout << vidaP << "/" <<std::to_string(per->getVida()) << ":  ";
    for(int i = 0; i < per->getVida(); i++){
        std::cout << "◼︎";
    }
    std::cout << "\n";
}

void Ataca::setAtributos(){
    Enemigo = Personaje->getPosicion()->getNPC();
    vidaE = Enemigo->getVida();
    vidaP = Personaje->getVida();
}
