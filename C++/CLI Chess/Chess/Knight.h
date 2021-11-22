//
// Created by patri on 17-11-2021.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "Piece.h"
class Knight: public Piece{
public:

    Knight(int posistionX, int posistionY, string type, string color);

    void move();
};


#endif //CHESS_KNIGHT_H
