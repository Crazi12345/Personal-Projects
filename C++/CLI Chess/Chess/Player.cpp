//
// Created by patri on 16-12-2021.
//

#include "header/Player.h"

Player::Player(){}
Player::Player(char name) {

this->name=name;
createPieces();
}


void Player::createPieces() {
    if (name == 'w') {
    for (int i = 0; i < 8; i++) {
        pieces.push_back(Pawn(1, i, "P", name));
    }
    pieces.push_back(King(0, 4, "K", name));
    pieces.push_back(Queen(0, 3, "Q", name));
    pieces.push_back(Bishop(0, 2, "B", name));
    pieces.push_back(Bishop(0, 5, "B", name));
    pieces.push_back(Rook(0, 0, "R", name));
    pieces.push_back(Rook(0, 7, "R", name));
    pieces.push_back(Knight(0, 1, "H", name));
    pieces.push_back(Knight(0, 6, "H", name));
}
else{
        for (int i = 0; i < 8; i++) {
            pieces.push_back(Pawn(6, i, "P", name));
        }
        pieces.push_back(King(7, 4, "K", name));
        pieces.push_back(Queen(7, 3, "Q", name));
        pieces.push_back(Bishop(7, 2, "B", name));
        pieces.push_back(Bishop(7, 5, "B", name));
        pieces.push_back(Rook(7, 0, "R", name));
        pieces.push_back(Rook(7, 7, "R", name));
        pieces.push_back(Knight(7, 1, "H", name));
        pieces.push_back(Knight(7, 6, "H", name));
}


}

vector<Piece> Player::getPieces() {


    return pieces;
}

char Player::getName() {

    return name;
}

string Player::getFullName(){
    int switcher = static_cast<int>(getName());
    switch(switcher){
    case 'w':
        return "White";
    default:
        return "Black";
    }
}
