//
// Created by patri on 16-11-2021.
//

#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H


#include "header/Piece.h"

class Bishop: public Piece {
public:
    Bishop(int posistionX, int posistionY, string type, char color);
    void move();
};


#endif //CHESS_BISHOP_H
