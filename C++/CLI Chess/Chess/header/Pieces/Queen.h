//
// Created by patri on 15-11-2021.
//

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H


#include "header/Piece.h"

class Queen : public Piece{
public:
        Queen(int posistionX, int posistionY, string type, char color);

    void move();
};


#endif //CHESS_QUEEN_H
