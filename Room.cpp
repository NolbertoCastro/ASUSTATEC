#include "Room.h"

Room::Room(){
    description="Es una habitacion sin name";
    for (int i=0; i<4; i++){
        exits[i]=nullptr;
    }
    tieneLlave=false;
}
Room::Room(std::string desc, bool cerrado){
    description=desc;
    for (int i=0; i<4; i++){
        exits[i]=nullptr;
    }
    tieneLlave=cerrado;
}

Room* Room::getExit(std::string dir){
    int num=getMove(dir);
    if(num>=0){
        return exits[num];
    }
    return nullptr;
}

void Room::setexits(Room* n, Room* s, Room* e, Room* o){
    exits[0]=n;
    exits[1]=s;
    exits[2]=e;
    exits[3]=o;
}

std::string Room::getDescription(){
    return description;
}

Item* Room::getItem(int num){
    if (num>=0 && num<cosas.size()){
        return cosas[num];
    }
    return nullptr;
}
bool Room::keyRequired(){
    return tieneLlave;
}

void Room::agregaItem(Item* cosita){
    cosas.push_back(cosita);
}
int Room::searchItem(std::string que){
    for(int i=0; i<cosas.size();i++){
        if(cosas[i]->getName()==que){
            return i; //devuelve la posición donde está ese objeto
        }
    }
    return -1; //regresa -1 si no encontró ese item
}

void Room::sacaItem(int pos){
    cosas.erase(cosas.begin()+pos); //Borra el de la posicion pos del vector
}

void Room::descriptionLarga(){
    std::cout << description << std::endl;
    std::cout << "Dentro de esta habitacion enigmatica tenemos: " << std::endl;
    for (int i=0; i<cosas.size(); i++){
        std::cout << cosas[i]->getDescription() << std::endl;
    }
}

int Room::getMove(std::string dir){
    if (dir=="N"){
        return 0;
    }
    if (dir=="S"){
        return 1;
    }
    if (dir=="E"){
        return 2;
    }
    if (dir=="W"){
        return 3;
    }
    return -1;
}

NPC* Room::getNPC(){
    return NPC1;
}

void Room::setNPC(NPC* _NPc){
    NPC1 = _NPc;
}