//
// Created by patri on 15-11-2021.
//

#ifndef CHESS_KING_H
#define CHESS_KING_H


#include "header/Piece.h"

class King: public Piece{
public:
    King(int posistionX, int posistionY, string type, char color);

    void move();
};


#endif //CHESS_KING_H
