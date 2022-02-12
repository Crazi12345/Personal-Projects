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
    Player currentPlayer = Player('w',{});
    Player alternatePlayer = Player('b',{});
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
//cout << currentPlayer.getPieces().at(0)->getName() << endl;
    for(int i = 0; i<currentPlayer.getPieces().size();i++){
        cout << "read";
        Piece* temp =currentPlayer.getPieces().at(i);
       board.setField(temp->getPosX(),temp->getPosY(),temp->getName());
       cout << temp->getName() << endl;
       cin.get();
    }
    for(int i = 0; i<alternatePlayer.getPieces().size();i++){
        Piece* temp =alternatePlayer.getPieces().at(i);
       board.setField(temp->getPosX(),temp->getPosY(),temp->getName());
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
