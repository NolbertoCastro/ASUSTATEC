#include "Ataca.h"

Ataca::Ataca(Character* personaje):Comando("Ataca", ""){
    Personaje = personaje;
    Enemigo = Personaje->getPosicion()->getNPC();
}

void Ataca::ejecuta(){
    int vidaN = Enemigo->getVida();
    std::cout << "Nos impresiona tu valentia, pero ahora es tiempo para luchar" << std::endl;
    std::cout << "Tu contricantes es: " << Enemigo->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Enemigo->getDano()) << "Protección: " << std::to_string(Enemigo->getProteccion()) << std::endl;
    Ataca::imprimevida(Personaje);
    Ataca::imprimevidaNPC(Enemigo);
}

void Ataca::imprimevidaNPC(NPC* npc){
    for(int i = 0; i < npc->getVida(); i++){
        std::cout << "#";
    }
}
void Ataca::imprimevida(Character* per){
    for(int i = 0; i < per->getVida(); i++){
        std::cout << "#";
    }
}
