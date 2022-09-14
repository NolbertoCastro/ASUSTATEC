#ifndef Character_H
#define Character_H

#include <iostream>
#include <vector>

#include "Room.h"
#include "pen.h"

class Character{
    private:
        std::string name;
        int health, attack, money, protection, HealthC;
        Room* actualRoom;
        std::vector <Item*> inventory;
    public:
        Character();
        Character(std::string, int, Room*, int, int, int, int);

        std::string getName() const;
        int getHealth();
        Room* getPosition();
        std::vector <Item*> getInventory() const;
        int getAttack() const;
        int getMoney() const;
        int getHealthC();
        int getProtection() const;
        Item* getItem(std::string);
        void deleteItem(std::string);

        void setName(std::string);
        void setHealth(int);
        void setPosicion(Room*);
        void setInventory(std::vector <Item*>);
        void setAttack(int);
        void setMoney(int);
        void setHealthC(int);
        void setProtection(int);

        void addItem(Item*);
        void itemDescription(std::string);

        void print();
        void printInventory();
        bool searchItem(std::string);
        bool move(std::string);

        int operator+(Item*); 
};

#endif