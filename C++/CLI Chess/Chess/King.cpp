#include "King.h"



King::King(int posX, int posY, char type, char color)
{
    this->color = color;
    this->type = type;
    this->posX = posX;
    this-> posY = posY;
}

char King::getType(){
    return type;
}
char King::getColor(){
    return color;
}
std::string King::getName(){
    std::string name = "";
            name += type;
            name += color;
    return name;
}


int King::getPosX(){
    return posX;
}
int King::getPosY(){
    return posY;
}
