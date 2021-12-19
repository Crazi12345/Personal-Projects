//
// Created by patri on 17-11-2021.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "header/Piece.h"
class Knight: public Piece{
public:

    Knight(int posistionX, int posistionY, string type, char color);

    void move();
};


#endif //CHESS_KNIGHT_H
