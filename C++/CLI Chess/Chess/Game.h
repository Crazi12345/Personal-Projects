//
// Created by patri on 15-11-2021.
//

#pragma once
#include <vector>
#include "Board.h"
class Game
{


public:
    Game();
    void Play();


private:
    void CreatePieces(Board& b);
    void PlacePieces(Board& b);
    std::vector<Piece> whitePieces;
    std::vector<Piece> blackPieces;
};

