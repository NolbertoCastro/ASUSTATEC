#include <iostream>
#include "Game.h"
using namespace std;

Game::Game(){
    createElements();
    createComands();
}

void Game::createComands(){
    wordList* command=parser.getcommand(); 
    command->addCommand("move", new moveCommand(Player));
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
    Hallway = new Room("Hallway1, nothing", false);
    Hallway2 = new Room("Hallway2, nothing", false);
    Hallway3 = new Room("Hallway3, nothing", false);
    Elevator = new Room("Elevator", true);
    WC = new Room("WC, there's a pen and a Starbucks", false);
    Classroom = new Room("Classroom, it's cold in here, there's an enemy called Teus, if you want to fight with him and win a reward write the command attack", false);
    Office = new Room("Office, there's a cold and evil enemy in this place called Agent 47, if you want to fight with him and win a reward write the command attack", false);
    //hay un fantasma que te puede vender cosas, Una pen en 500 y Una experiencia (Starbucks) en 600
    

    //Definimos Objetos
    Key=new Item("Key", "Will let you open the Elevator door and win the game", 0);
    P1 = new pen();
    S1 = new Starbucks();
    S2 = new Starbucks();

    //Definimos personajes
    Seller = new seller("Seller", 0, 0, 0, 0);
    Teus = new NPC("Teus Monster", 30, 5, 1, 30);
    Agent47 = new NPC("AGENT 47", 10, 3, 1, 10);
    Player=new Character("Janitor", 20, Hallway, 3 , 800, 1, 20);

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
    WC->addItem(S1);
    WC->addItem(P1);
    
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

    std::cout << "\nWelcome to ASUSTATEC the horror videogame inside the Monterrey Institute of Technology and Higher Education" << std::endl;
    std::cout << "\nThrough all the gamplay you'll fight monsters, earn money and buy items to defeat the monsters easelier" << std::endl;
    std::cout << "\nTo win you'll have to buy or get as a reward the access card of a tec student to get in the elevator and scape, let me show you the game map."  << std::endl;

    std::cout << "\n***************" << std::endl;
    std::cout << "*░░░**░░░**░░░*" << std::endl;
    std::cout << "*░O░░░░3░░░░E░*" << std::endl;
    std::cout << "*░░░**░░░**░░░*" << std::endl;
    std::cout << "******░░░******" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "*░C░░░░2░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "******░░░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "*░W░░░░1░*" << std::endl;
    std::cout << "*░░░**░░░*" << std::endl;
    std::cout << "**********" << std::endl;

    std::cout << "\nYou will start in the begining of a 5th floor Hallway, you'll have to move through rooms to defeat enemies and buy items" << std::endl;
    std::cout << "\nThe objective is to get the access card of a tec student to open the elevator and get out" << std::endl;
    std::cout << "\nTo play this game you can use the following commands: " << std::endl;

    std::cout << "\nhelp = print all the available commands" << std::endl;
    std::cout << "move N = Up" << std::endl;
    std::cout << "move S = Down" << std::endl;
    std::cout << "move W = left" << std::endl;
    std::cout << "move E = Right" << std::endl;
    std::cout << "attack = attacks the villain in the room you're at" << std::endl;
    std::cout << "take + (item name) = Take items from the room you're at" << std::endl;
    std::cout << "useItem + (item name) = Use an item in your inventory" << std::endl;
    std::cout << "inventory = prints all the items in your inventory" << std::endl;
    std::cout << "printMapa = prints the game map" << std::endl;
    std::cout << "If you need help only write: help\n" << std::endl;
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