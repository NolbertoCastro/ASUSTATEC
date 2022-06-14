#include "Ataca.h"

Ataca::Ataca(Character* personaje):Comando("Ataca", ""){
    Conserje = personaje;
    // Personaje = personaje->getPosicion()->getCharacter();
}

void Ataca::ejecuta(){
    int vidaN = Personaje->getVida();
    std::cout << "Nos impresiona tu valentia, pero ahora es tiempo para luchar" << std::endl;
    std::cout << "Tu contricantes es: " << Personaje->getNombre() << std::endl;
    std::cout << "Daño: " << std::to_string(Personaje->getAtaque()) << "Protección: " << std::to_string(Personaje->getProteccion()) << std::endl;
    imprimevida(Personaje);

}

void Ataca::imprimevida(Character* per){
    for(int i = 0; i < per->getVida(); i++){
        std::cout << "#";
    }
}
