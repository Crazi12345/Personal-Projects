#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <iostream>
class Piece
{
public:
    Piece();
  //  Piece(int posX,int posY, char type, char color);
    virtual char getType()=0;
    virtual char getColor()=0;
    virtual std::string getName()=0;
    virtual int getPosX()=0;
    virtual int getPosY()=0;
private:
    char type;
    char color;
    char posY;
    char posX;

};

#endif // PIECE_H
