#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
class Queen: public Piece
{
public:
    Queen();
    Queen(int posX, int posY,char type, char color );
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

#endif // QUEEN_H
