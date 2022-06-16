#include <iostream>
#include "Game.h"
using namespace std;

Game::Game(){
    creaElementos();
    creaComandos();
}

void Game::creaComandos(){
    ListaPalabras* comandos=parser.getComandos();
    comandos->agregaComando("Mover", new DesplazaComando(personaje));
    comandos->agregaComando("Toma", new TomaComando(personaje));
    comandos->agregaComando("Ayuda", new AyudaComando(comandos));
    comandos->agregaComando("ImprimeMapa", new ImprimeMapa(personaje));
    comandos->agregaComando("Inventario", new Inventario(personaje));
    comandos->agregaComando("Ataca", new Ataca(personaje));
    comandos->agregaComando("Usar", new Usar(personaje));
}

/*crea todos los elementos que están presentes en el juego 
y los configura (cuartos sus salidas y que objetos hay en cada room)*/
void Game::creaElementos(){
    //Definimos Lugares
    Pasillo = new Room("Pasillo1, no hay nada", false);
    Pasillo2 = new Room("Pasillo2, no hay nada", false);
    Pasillo3 = new Room("Pasillo3, no hay nada", false);
    Elevador = new Room("Elevador", true);
    Banio = new Room("Banio, hay una Pluma y un Starbucks", false);
    Salon = new Room("Salon,hace frio, hay un Teus Satanico en el cuarto, si quieres atacarlo y ganar una recompensa escribe Ataca", false);
    Oficina = new Room("Oficina, hay un enemigo frio y calculador llamado Agente47 si quieres enfrentarlo y ganar una recompensa escribe Ataca", false);
    //hay un fantasma que te puede vender cosas, Una pluma en 500 y Una experiencia (Starbucks) en 600
    

    //Definimos Objetos
    llave=new Item("Llave", "Te permitirá utilizar el elevador y salir del juego", 0);
    P1 = new Pluma();
    S1 = new Starbucks();
    S2 = new Starbucks();

    //Definimos personajes
    Comercio = new Comerciante("Comerciante", 0, 0, 0, 0);
    Teus = new NPC("Teus Satanico", 30, 5, 1, 30);
    Agente47 = new NPC("AGENTE 47", 10, 3, 1, 10);
    personaje=new Character("Conserje", 20, Pasillo, 3 , 800, 1, 20);

    //Definimos Recompenas
    Teus->setRecompensa(llave);
    Agente47->setRecompensa(S2);
    //Definimos salidas
    Pasillo->setSalidas(Pasillo2,nullptr,nullptr,Banio);
    Pasillo2->setSalidas(Pasillo3,Pasillo,nullptr,Salon);
    Pasillo3->setSalidas(nullptr,Pasillo2,Elevador,Oficina);
    Banio->setSalidas(nullptr,nullptr,Pasillo,nullptr);
    Salon->setSalidas(nullptr,nullptr,Pasillo2,nullptr);
    Oficina->setSalidas(nullptr,nullptr,Pasillo3,nullptr);
    Banio->agregaItem(S1);
    Banio->agregaItem(P1);
    
    // Ponemos NPC'S en sus cuartos
    Salon->setNPC(Teus);
    Oficina->setNPC(Agente47);
}

void Game::imprimeBienvenida(){
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░█░░░░░░█░░░█░░░█░░░░░██░░░██████░░███░░░████████░░██████░░░░░█░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░███░░░░██░░░█░░░█░░░░░█░░░░░░█░░░░░█░█░░░░░░░█░░░░░█░░░░░░░░██░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░██░█░░░██░░░░█░░░█░░░██░░░░░░░█░░░░█████░░░░░░█░░░░░█░░░░░░░██░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░████░░░████░░█░░░█░░░███░░░░░██░░░██░░░█░░░░░██░░░░████░░░░██░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░█░░░█░░░░██░░░█░░░█░░░░░██░░░░█░░░░█░░░░█░░░░░█░░░░░█░░░░░░██░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░█░░░░█░░░█░░░░██░██░░░░██░░░░██░░░░░░░░░██░░░██░░░░█░░░░░░░░███░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░█░░██░░░░░███░░░░░█░░░░░█░░░░░░░░░░░█░░░█░░░░░█████░░░░░░██░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░█████░░░░░░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░███████░░░░████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░███░░███░░░░███░░████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░█░░░░██░░░░███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░░░████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░████░░██████████░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░██████░░░░░░░░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░░░░░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░██░░░░░░██░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░██░░░░██░░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░█░░██░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██░░░░░░░░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███░█░█░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░░█░░░░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;
    std::cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << std::endl;

    std::cout << "\nBienvenido a ASUSTATEC el videojuego de Terror en el Tecnologico de Monterrey" << std::endl;
    std::cout << "\nEn este videojuego tendrás que pelear contra enemigos, ganar dinero y comprar items para mejorar tu personaje." << std::endl;
    std::cout << "\nPara ganar tendrás que ganar/comprar una tarjeta de alumno tec para acceder al elevador y ganar, a continuación te mostramos el mapa."  << std::endl;

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
    std::cout << "**********" << std::endl;

    std::cout << "\nEmpezarás en al inicio del pasillo localizado al lado del cuarto #5, tendrás que recorrer los cuartos, vencer enemigos, comprar objetos." << std::endl;
    std::cout << "\nTodo con el objetivo de conseguir la tarjeta de alumno tec para acceder al elevador." << std::endl;
    std::cout << "\nPara poder desplazarte por el mapa podras usar los siguientes comandos:" << std::endl;

    std::cout << "\nAyuda = Imprimir los comandos disponibles" << std::endl;
    std::cout << "Mover N = Arriba" << std::endl;
    std::cout << "Mover S = Abajo" << std::endl;
    std::cout << "Mover O = Izquierda" << std::endl;
    std::cout << "Mover E = Derecha" << std::endl;
    std::cout << "Ataca = Atacas al personaje en cuestion en el cuarto" << std::endl;
    std::cout << "Toma + Objeto = Agarrar objeto de cuarto" << std::endl;
    std::cout << "Usar + Objeto = Utilizar un objeto del inventario" << std::endl;
    std::cout << "Inventario = Te imprime tu inventario" << std::endl;
    std::cout << "ImprimeMapa = Te despliega el mapa y tu posición actual" << std::endl;
    std::cout << "Si necesitas ayuda teclea la palabra: ayuda\n" << std::endl;
}

void Game::play(){
    imprimeBienvenida();
    bool finished = false;
    while (!finished) {
        Comando* comando = parser.generaComando();
        finished = procesaComando(comando);
    }
    std::cout << "Gracias por jugar este juego de aventura te esperamos a la siguiente en ASUSTATEC" << std::endl;
    std::cout << "Donde damos sustos que dan gusto" << std::endl;
}

bool Game::procesaComando(Comando* instr){
    bool salio = false;
    instr->ejecuta(); // se esta ejecutando polimorfismo
    
    if(personaje->getPosicion()==Elevador){
        if(personaje->buscaItem("Llave")){
            salio = true;
        }
        else{
            personaje->setPosicion(Pasillo3);
        }
    }
return salio;
}