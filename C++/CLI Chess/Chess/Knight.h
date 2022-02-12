#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"
class Knight: public Piece
{
public:
    Knight();
    Knight(int posX, int posY,char type, char color );
    virtual char getType() override;
    virtual char getColor() override;
    virtual std::string getName() override;
    virtual int getPosX()override;
    virtual int getPosY()override;
private:
    char type;
    char color;
    int posX;
    int posY;

};

#endif // KNIGHT_H
