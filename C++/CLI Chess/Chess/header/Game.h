//
// Created by patri on 15-11-2021.
//

#pragma once
#include <vector>
#include "Board.h"
#include "Parser.h"
#include "Player.h"

class Game
{


public:

    Game();
    void Setup();
    std::vector<std::vector<Piece>> getPieces();
    void SwitchCurrentPlayer();
    Player getCurrentPlayer();
    Player getAlternatePlayer();

private:
   bool isFinished = false;
   bool isFirst = true;

    Board board;
    Parser parser;
    Player currentPlayer;
    Player alternatePlayer;



protected:
    void Play();
    void PlacePieces(Board& b);
    Player White;
    Player Black;




};

