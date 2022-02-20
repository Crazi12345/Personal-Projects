//
// Created by patri on 16-12-2021.
//

#ifndef CHESS_PLAYER_H
#define CHESS_PLAYER_H


#include <vector>
#include "Piece.h"
#include "Pawn.h"
#include "King.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include <iostream>

class Player {
public:
    Player();
    Player(char name);
    std::vector<Piece*> createPieces();
    char getName();
    std::vector<Piece*> getPieces();
private:
std::vector<Piece*> pieces;
    char name;
};


#endif //CHESS_PLAYER_H
