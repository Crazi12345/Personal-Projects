//
// Created by Patrick Larsen on 15-11-2021.
//

#include "Game.h"
#include "Player.h"
#include <iostream>
#include <unistd.h>
#include <chrono>
#include <thread>
using namespace std;


Game::Game() {
  }

void Game::Setup() {
    board.PrettyPrint();
     Player whitePlayer = Player('w');
     Player blackPlayer = Player('b');
     currentPlayer = whitePlayer;
     alternatePlayer = blackPlayer;
   //cout<<"pieces list: "<<currentPlayer.getPieces().size()<<endl;
    PlacePieces();
        board.PrettyPrint();
    Play();
}

void Game::Play() {

    parser.Command();
    cout << "\nPlease press any key to continue...";

    cin.get();

    Play();

}


void Game::PlacePieces(){
    for(int i = 0; i<currentPlayer.getPieces().size();i++){

           Piece* ptr = currentPlayer.getPieces().at(i);
          board.setField(ptr->getPosX(),ptr->getPosY(),ptr->getName());

    }
    for(int i = 0; i<alternatePlayer.getPieces().size();i++){
        Piece* ptr =alternatePlayer.getPieces().at(i);
       board.setField(ptr->getPosX(),ptr->getPosY(),ptr->getName());
    }

}



Player Game::getCurrentPlayer(){
    return currentPlayer;
}
void Game::SwitchPlayer(){
    Player temp;
    temp = currentPlayer;
    currentPlayer = alternatePlayer;
    alternatePlayer = temp;
}
