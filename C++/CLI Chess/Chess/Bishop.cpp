#include "Bishop.h"

Bishop::Bishop()
{

}

Bishop::Bishop(int posX, int posY, char type, char color)
{

    this->color = color;
    this->type = type;
    this->posX = posX;
    this-> posY = posY;
}

char Bishop::getType(){
    return type;
}
char Bishop::getColor(){
    return color;
}
std::string Bishop::getName(){
    std::string name = "";
            name += type;
            name += color;
    return name;
}
int Bishop::getPosX(){
    return posX;
}
int Bishop::getPosY(){
    return posY;
}
