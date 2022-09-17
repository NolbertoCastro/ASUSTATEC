#include "attack.h"

attack::attack(Character* _player):Command("attack", ""){
    Player = _player; 
}

void attack::execute(){
    attack::setAtributos();
    system("clear");
    std::cout << "\nFIGHT!!!!\n" << std::endl;
    std::cout << "Your Enenemy is: " << Enemy->getName() << std::endl;
    std::cout << "Damage: " << std::to_string(Enemy->getDamage()) << "   " << "Protection: " << std::to_string(Enemy->getProtection()) << "\n" << std::endl;
    Enemy->setHealth((Enemy->getHealth() - Player->getAttack()));
    attack::printHealthNPC(Enemy);
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "\n" << std::endl;
    attack::Enemyattack();
    attack::printHealth(Player);
    std::cout << "\n" << std::endl;
    std::cout << "You: " << Player->getName() << std::endl;
    std::cout << "Damage: " << std::to_string(Player->getAttack()) << "   " << "Protection: " << std::to_string(Player->getProtection()) << "\n" << std::endl;
    if (Enemy->getHealth() <= 0){
        std::cout << "Congratulations you beated " << Enemy->getName() << ", as a reward we give you this gift:" << std::endl;
        Enemy->getReward()->printItem();
        Enemy->setHealth(Enemy->getHealthC());
        Player->addItem(Enemy->getReward());
        std::cout << "You can see this item in your Inventory using the Command inventory" << std::endl;
    }
}


void attack::printHealthNPC(NPC* npc){
    std::cout << npc->getHealthC() << "/" << std::to_string(npc->getHealth()) << ":  ";
    for(int i = 0; i < npc->getHealth(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (npc->getHealthC()-npc->getHealth()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}
void attack::printHealth(Character* per){
    std::cout << per->getHealthC() << "/" <<std::to_string(per->getHealth()) << ":  ";
    for(int i = 0; i < per->getHealth(); i++){
        std::cout << "#";
    }
    for(int i = 0; i < (per->getHealthC()-per->getHealth()); i++){
        std::cout << "-";
    }
    std::cout << "\n";
}

void attack::setAtributos(){
    Enemy = Player->getPosition()->getNPC();
}

void attack::Enemyattack(){
    srand(time(NULL));
    int attackr = 0 + rand() % (1 - 0 + 1);
    if (attackr == 1){
        Player->setHealth(Player->getHealth()-Enemy->getDamage());
    }
}