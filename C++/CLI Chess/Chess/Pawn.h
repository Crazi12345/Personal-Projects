#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"
class Pawn: public Piece
{
public:
    Pawn(int posX, int posY,char type, char color );
    virtual char getType() override;
    virtual char getColor() override;
    virtual std::string getName() override;
    virtual int getPosX()override;
    virtual int getPosY()override;
    virtual std::string getFullName() override;
private:
    char type;
    char color;
    int posX;
    int posY;

};

#endif // PAWN_H
