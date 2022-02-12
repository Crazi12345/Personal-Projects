#include "Queen.h"

Queen::Queen()
{

}

Queen::Queen(int posX, int posY, char type, char color)
{
    this->color = color;
    this->type = type;
    this->posX = posX;
    this->posY = posY;
}

char Queen::getType(){
    return type;
}
char Queen::getColor(){
    return color;
}
std::string Queen::getName(){
    std::string name = "";
            name += type;
            name += color;
    return name;
}


int Queen::getPosX(){
    return posX;
}
int Queen::getPosY(){
    return posY;
}
