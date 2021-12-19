//
// Created by Patrick Larsen on 15-11-2021.
//

#include "header/Game.h"
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <thread>
using namespace std;


Game::Game() {
    Player Black('b');
    Player White('w');
    this->White = White;
    this->Black = Black;
    Board b;
     board=b;
    Parser p;
      parser=p;
      currentPlayer = White;
}

void Game::Setup() {
    board.PrettyPrint();

    PlacePieces(board);
    board.PrettyPrint();

    Play();
}

void Game::Play() {
   system("cls");
    this_thread::sleep_for(chrono::milliseconds(100));
    board.PrettyPrint();
    cout << "\nPlease Input a Command:";

    parser.Command(currentPlayer);

   // cin.get();
    SwitchCurrentPlayer();
    Play();

}


void Game::PlacePieces(Board &b) {

    for (int i = 0; i < White.getPieces().size(); i++) {
        b.setField(White.getPieces().at(i).getPosistionX(), White.getPieces().at(i).getPosistionY(), White.getPieces().at(i).getName());
    }
    for (int i = 0; i < Black.getPieces().size(); i++) {
        b.setField(Black.getPieces().at(i).getPosistionX(), Black.getPieces().at(i).getPosistionY(), Black.getPieces().at(i).getName());
    }
}


void Game::SwitchCurrentPlayer() {

    if(currentPlayer.getName() == 'w'){
        currentPlayer=Black;
    }
    else{
        currentPlayer=White;
    }

}
Player Game::getCurrentPlayer() {return currentPlayer;}
