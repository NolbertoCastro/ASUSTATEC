#include <iostream>
#include "Game.h"
using namespace std;

Game::Game(){
    createElements();
    createComands();
}

void Game::createComands(){
    wordList* command=parser.getcommand(); 
    command->addCommand("Mover", new moveCommand(Player));
    command->addCommand("take", new takeCommand(Player));
    command->addCommand("help", new helpCommand(command));
    command->addCommand("printMap", new printMap(Player));
    command->addCommand("inventory", new inventory(Player));
    command->addCommand("attack", new attack(Player));
    command->addCommand("useItem", new useItem(Player));
}

/*crea todos los elementos que están presentes en el juego 
y los configura (cuartos sus exits y que objetos hay en cada room)*/
void Game::createElements(){
    //Definimos Lugares
    Hallway = new Room("Hallway1, no hay nada", false);
    Hallway2 = new Room("Hallway2, no hay nada", false);
    Hallway3 = new Room("Hallway3, no hay nada", false);
    Elevator = new Room("Elevator", true);
    WC = new Room("WC, hay una pen y un Starbucks", false);
    Classroom = new Room("Classroom,hace frio, hay un Teus Satanico en el cuarto, si quieres attackrlo y ganar una reward escribe attack", false);
    Office = new Room("Office, hay un enemigo frio y calculador llamado Agent47 si quieres enfrentarlo y ganar una reward escribe attack", false);
    //hay un fantasma que te puede vender cosas, Una pen en 500 y Una experiencia (Starbucks) en 600
    

    //Definimos Objetos
    Key=new Item("Key", "Te permitirá utilizar el Elevator y salir del juego", 0);
    P1 = new pen();
    S1 = new Starbucks();
    S2 = new Starbucks();

    //Definimos personajes
    Seller = new seller("seller", 0, 0, 0, 0);
    Teus = new NPC("Teus Satanico", 30, 5, 1, 30);
    Agent47 = new NPC("AGENTE 47", 10, 3, 1, 10);
    Player=new Character("Conserje", 20, Hallway, 3 , 800, 1, 20);

    //Definimos Recompenas
    Teus->setReward(Key);
    Agent47->setReward(S2);
    //Definimos exits
    Hallway->setexits(Hallway2,nullptr,nullptr,WC);
    Hallway2->setexits(Hallway3,Hallway,nullptr,Classroom);
    Hallway3->setexits(nullptr,Hallway2,Elevator,Office);
    WC->setexits(nullptr,nullptr,Hallway,nullptr);
    Classroom->setexits(nullptr,nullptr,Hallway2,nullptr);
    Office->setexits(nullptr,nullptr,Hallway3,nullptr);
    WC->agregaItem(S1);
    WC->agregaItem(P1);
    
    // Ponemos NPC'S en sus cuartos
    Classroom->setNPC(Teus);
    Office->setNPC(Agent47);
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
    std::cout << "\nEn este videojuego tendrás que pelear contra enemigos, ganar money y comprar items para mejorar tu Player." << std::endl;
    std::cout << "\nPara ganar tendrás que ganar/comprar una tarjeta de alumno tec para acceder al Elevator y ganar, a continuación te mostramos el mapa."  << std::endl;

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

    std::cout << "\nEmpezarás en al inicio del Hallway localizado al lado del cuarto #5, tendrás que recorrer los cuartos, vencer enemigos, comprar objetos." << std::endl;
    std::cout << "\nTodo con el objetivo de conseguir la tarjeta de alumno tec para acceder al Elevator." << std::endl;
    std::cout << "\nPara poder moverte por el mapa podras useItem los siguientes command:" << std::endl;

    std::cout << "\nhelp = Imprimir los command disponibles" << std::endl;
    std::cout << "Mover N = Arriba" << std::endl;
    std::cout << "Mover S = Abajo" << std::endl;
    std::cout << "Mover O = Izquierda" << std::endl;
    std::cout << "Mover E = Derecha" << std::endl;
    std::cout << "attack = attacks al Player en cuestion en el cuarto" << std::endl;
    std::cout << "take + Objeto = Agarrar objeto de cuarto" << std::endl;
    std::cout << "useItem + Objeto = Utilizar un objeto del inventory" << std::endl;
    std::cout << "inventory = Te print tu inventory" << std::endl;
    std::cout << "printMapa = Te despliega el mapa y tu posición actual" << std::endl;
    std::cout << "Si necesitas help teclea la palabra: help\n" << std::endl;
}

void Game::play(){
    printWelcome();
    bool finished = false;
    while (!finished) {
        Command* Command = parser.createCommand();
        finished = processComand(Command);
    }
    std::cout << "Thanks for playing, I hope you enjoyed playing this game, i will see you in the next one in ASUSTATEC" << std::endl;
    std::cout << "Where we give frights that please" << std::endl;
}

bool Game::processComand(Command* instr){
    bool exit = false;
    instr->execute(); // se esta ejecutando polimorfismo
    
    if(Player->getPosition()==Elevator){
        if(Player->searchItem("Key")){
            exit = true;
        }
        else{
            Player->setPosition(Hallway3);
        }
    }
return exit;
}