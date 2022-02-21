#include "Rook.h"

Rook::Rook()
{

}

Rook::Rook(int posX, int posY, char type, char color)
{
    this->color = color;
    this->type = type;
    this->posX = posX;
    this->posY = posY;
}

char Rook::getType(){
    return type;
}
char Rook::getColor(){
    return color;
}
std::string Rook::getName(){
    std::string name = "";
            name += type;
            name += color;
    return name;
}


int Rook::getPosX(){
    return posX;
}

int Rook::getPosY(){
    return posY;
}

std::string Rook::getFullName(){
    return "Rook";
}
