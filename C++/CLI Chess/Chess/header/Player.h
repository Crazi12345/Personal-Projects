//
// Created by patri on 16-12-2021.
//

#ifndef CHESS_PLAYER_H
#define CHESS_PLAYER_H


#include <vector>
#include "Piece.h"
#include "header/Pieces/Pawn.h"
#include "header/Pieces/Queen.h"
#include "header/Pieces/Knight.h"
#include "header/Pieces/Bishop.h"
#include "header/Pieces/King.h"
#include <iostream>
#include "header/Pieces/Rook.h"

class Player {
public:
    Player();
    Player(char name);
    void createPieces();
    vector<Piece> getPieces();
    char getName();
    string getFullName();


private:
    std::vector<Piece> pieces;
    char name;
};


#endif //CHESS_PLAYER_H
