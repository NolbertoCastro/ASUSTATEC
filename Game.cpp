#include <iostream>
#include "Game.h"
using namespace std;

Game::Game(){
    createElements();
    createComands();
}

void Game::createComands(){
    wordList* command=parser.getcommand(); 
    command->addCommand("Mover", new moveCommand(personaje));
    command->addCommand("take", new takeCommand(personaje));
    command->addCommand("help", new helpCommand(command));
    command->addCommand("printMap", new printMap(personaje));
    command->addCommand("inventory", new inventory(personaje));
    command->addCommand("attack", new attack(personaje));
    command->addCommand("useItem", new useItem(personaje));
}

/*crea todos los elementos que están presentes en el juego 
y los configura (cuartos sus salidas y que objetos hay en cada room)*/
void Game::createElements(){
    //Definimos Lugares
    Pasillo = new Room("Pasillo1, no hay nada", false);
    Pasillo2 = new Room("Pasillo2, no hay nada", false);
    Pasillo3 = new Room("Pasillo3, no hay nada", false);
    Elevador = new Room("Elevador", true);
    Banio = new Room("Banio, hay una pen y un Starbucks", false);
    Salon = new Room("Salon,hace frio, hay un Teus Satanico en el cuarto, si quieres attackrlo y ganar una recompensa escribe attack", false);
    Oficina = new Room("Oficina, hay un enemigo frio y calculador llamado Agente47 si quieres enfrentarlo y ganar una recompensa escribe attack", false);
    //hay un fantasma que te puede vender cosas, Una pen en 500 y Una experiencia (Starbucks) en 600
    

    //Definimos Objetos
    llave=new Item("Llave", "Te permitirá utilizar el elevador y salir del juego", 0);
    P1 = new pen();
    S1 = new Starbucks();
    S2 = new Starbucks();

    //Definimos personajes
    Comercio = new seller("seller", 0, 0, 0, 0);
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

void Game::printWelcome(){
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
    std::cout << "\nPara poder moverte por el mapa podras useItem los siguientes command:" << std::endl;

    std::cout << "\nhelp = Imprimir los command disponibles" << std::endl;
    std::cout << "Mover N = Arriba" << std::endl;
    std::cout << "Mover S = Abajo" << std::endl;
    std::cout << "Mover O = Izquierda" << std::endl;
    std::cout << "Mover E = Derecha" << std::endl;
    std::cout << "attack = attacks al personaje en cuestion en el cuarto" << std::endl;
    std::cout << "take + Objeto = Agarrar objeto de cuarto" << std::endl;
    std::cout << "useItem + Objeto = Utilizar un objeto del inventory" << std::endl;
    std::cout << "inventory = Te imprime tu inventory" << std::endl;
    std::cout << "ImprimeMapa = Te despliega el mapa y tu posición actual" << std::endl;
    std::cout << "Si necesitas help teclea la palabra: help\n" << std::endl;
}

void Game::play(){
    printWelcome();
    bool finished = false;
    while (!finished) {
        Command* Command = parser.generaCommand();
        finished = processComand(Command);
    }
    std::cout << "Gracias por jugar este juego de aventura te esperamos a la siguiente en ASUSTATEC" << std::endl;
    std::cout << "Donde damos sustos que dan gusto" << std::endl;
}

bool Game::processComand(Command* instr){
    bool salio = false;
    instr->execute(); // se esta ejecutando polimorfismo
    
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