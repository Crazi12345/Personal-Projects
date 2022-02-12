#include "Knight.h"

Knight::Knight()
{

}

Knight::Knight(int posX, int posY, char type, char color)
{
    this->color = color;
    this->type = type;
    this->posX = posX;
    this->posY = posY;
}

char Knight::getType(){
    return type;
}
char Knight::getColor(){
    return color;
}
std::string Knight::getName(){
    std::string name = "";
            name += type;
            name += color;
    return name;
}



int Knight::getPosX(){
    return posX;
}
int Knight::getPosY(){
    return posY;
}
