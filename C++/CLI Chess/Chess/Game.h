//
// Created by patri on 15-11-2021.
//

#pragma once
#include <vector>
#include "Board.h"
#include "Parser.h"
class Game
{


public:

    Game();
    void Setup();


private:
   bool isFinished = false;
   bool isFirst = true;
    std::vector<Piece> whitePieces;
    std::vector<Piece> blackPieces;
    Board board;


protected:
    void Play();
    void move();
    void CreatePieces(Board& b);
    void PlacePieces(Board& b);
    Parser parser;



};

