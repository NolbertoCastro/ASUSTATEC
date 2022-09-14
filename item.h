#ifndef ITEM_H
#define ITEM_H
#include <iostream>

class Item{
    private:
        std::string name;
        std::string description;
        int weight;

    public:
        Item();
        Item(std::string, std::string, int);

        std::string getDescription() const;
        std::string getName() const;
        int getWeight() const;

        void setDescription(std::string);
        void setName(std::string);
        void setWeight(int);
        virtual void printItem();
        virtual int execute();
};

#endif