//
// Created by patri on 17-11-2021.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H
#include "header/Piece.h"

class Rook: public Piece {


public:
    Rook(int posistionX, int posistionY, string type, char color);

    void move();
};


#endif //CHESS_ROOK_H
