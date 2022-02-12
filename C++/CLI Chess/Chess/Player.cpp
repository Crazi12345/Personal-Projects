//
// Created by patri on 16-12-2021.
//
#include "Piece.h"
#include "Pawn.h"
#include "King.h"
#include "Rook.h"
#include "Knight.h"
#include "Queen.h"
#include "Player.h"

using namespace std;

Player::Player(){}
Player::Player(char name,std::vector<Piece*>pieces) {
this->name=name;
    this->pieces = pieces;
createPieces();

}


void Player::createPieces() {
    int place;
    if(name == 'w'){
       place = 0;
    for (int i = 0; i < 8; i++) {
        Pawn p = Pawn(1, i, 'P', name);
            pieces.push_back(&p);
        }
    }
    else{
        place = 7;
        for (int i = 0; i < 8; i++) {
            Pawn p = Pawn(1, i, 'P', name);
                pieces.push_back(&p);
            }}

           King k= King(place,4,'P',name);
           Queen q(place, 3, 'Q', name);
           Bishop b(place, 2, 'B', name);
           Bishop bb(place, 5, 'B', name);
           Rook r(place, 0,'R', name);
           Rook rr(place, 7, 'R', name);
           Knight n(place, 1, 'N', name);
           Knight nn(place, 6, 'N', name);

           pieces.push_back(new King(place,4,'P',name));
           pieces.push_back(&q);
           pieces.push_back(&b);
           pieces.push_back(&bb);
           pieces.push_back(&r);
           pieces.push_back(&rr);
           pieces.push_back(&n);
           pieces.push_back(&nn);
           cout << pieces.size();

}

std::vector<Piece*> Player::getPieces()
{   cout << pieces.empty();
    return pieces;
}


