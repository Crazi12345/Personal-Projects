//
// Created by patri on 15-11-2021.
//

#include "Game.h"
#include "Board.h"
#include"Piece.h"
#include "Pawn.h"
#include "Queen.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include <iostream>
#include "Rook.h"
#include <vector>
#include <string>


using namespace std;


Game::Game() {
    Board b;
     board=b;
    Parser p;
      parser=p;
}

void Game::Setup() {

    board.PrettyPrint();
    CreatePieces(board);
    board.PrettyPrint();
    Play();
}

void Game::Play() {
    system("cls");
    board.PrettyPrint();

    cout << "'\n'Please Input a Command:";

    parser.Command();
    //usleep(1500000);
    cin.get();



    Play();

}

void Game::CreatePieces(Board &b) {

    for (int i = 0; i < 8; i++) {
        whitePieces.push_back(Pawn(1, i, "P", "w"));
    }
    for (int i = 0; i < 8; i++) {
        blackPieces.push_back(Pawn(6, i, "P", "b"));
    }
    whitePieces.push_back(King(0, 4, "K", "w"));
    blackPieces.push_back(King(7, 4, "K", "b"));
    whitePieces.push_back(Queen(0, 3, "Q", "w"));
    blackPieces.push_back(Queen(7, 3, "Q", "b"));
    whitePieces.push_back(Bishop(0, 2, "B", "w"));
    blackPieces.push_back(Bishop(0, 5, "B", "w"));
    whitePieces.push_back(Bishop(7, 2, "B", "b"));
    blackPieces.push_back(Bishop(7, 5, "B", "b"));
    whitePieces.push_back(Rook(0, 0, "R", "w"));
    blackPieces.push_back(Rook(0, 7, "R", "w"));
    whitePieces.push_back(Rook(7, 0, "R", "b"));
    blackPieces.push_back(Rook(7, 7, "R", "b"));
    whitePieces.push_back(Knight(0, 1, "K", "w"));
    blackPieces.push_back(Knight(0, 6, "K", "w"));
    whitePieces.push_back(Knight(7, 1, "K", "b"));
    blackPieces.push_back(Knight(7, 6, "K", "b"));

    PlacePieces(b);
}


void Game::move() {

}

void Game::PlacePieces(Board &b) {

    for (int i = 0; i < whitePieces.size(); i++) {
        b.setField(whitePieces.at(i).getPosistionX(), whitePieces.at(i).getPosistionY(), whitePieces.at(i).getName());
    }
    for (int i = 0; i < blackPieces.size(); i++) {
        b.setField(blackPieces.at(i).getPosistionX(), blackPieces.at(i).getPosistionY(), blackPieces.at(i).getName());
    }
}
