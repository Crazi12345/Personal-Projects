//
// Created by patri on 15-11-2021.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H


#include "header/Piece.h"

class Pawn : public Piece {

public:
    Pawn(int posistionX, int posistionY, string type, char color);
    void move();
};


#endif //CHESS_PAWN_H




// Sprog
//c, c++, rust       // low level
// c#, java          // mid level
// python            //high level
//javascript, dotnet   //web dev
//bash               //for automation