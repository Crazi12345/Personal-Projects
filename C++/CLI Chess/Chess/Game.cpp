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
      alternatePlayer = Black;
}

void Game::Setup() {
    board.PrettyPrint();

    PlacePieces(board);
    board.PrettyPrint();

    Play();
}

void Game::Play() {
   system("clear");
    this_thread::sleep_for(chrono::milliseconds(300));
    cout << "it's "<< getCurrentPlayer().getFullName() << "'s"<< " turn" << endl;
    board.PrettyPrint();


    parser.Command(currentPlayer, alternatePlayer);
    cout << "\nPlease press any key to continue...";

    cin.get();
    SwitchCurrentPlayer();
    Play();

}


void Game::PlacePieces(Board &board) {

    for (int i = 0; i < White.getPieces().size(); i++) {
        board.setField(White.getPieces().at(i).getPosistionX(), White.getPieces().at(i).getPosistionY(), White.getPieces().at(i).getName());
    }
    for (int i = 0; i < Black.getPieces().size(); i++) {
        board.setField(Black.getPieces().at(i).getPosistionX(), Black.getPieces().at(i).getPosistionY(), Black.getPieces().at(i).getName());
    }
}


void Game::SwitchCurrentPlayer() {
    Player temp = alternatePlayer;
    alternatePlayer = currentPlayer;
    currentPlayer = temp;

}
Player Game::getCurrentPlayer() {return currentPlayer;}
Player Game::getAlternatePlayer() {return alternatePlayer;}
