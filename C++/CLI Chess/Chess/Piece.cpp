//
// Created by patri on 15-11-2021.
//
#include <iostream>
#include "header/Piece.h"
#include "header/Board.h"
Piece::Piece(int positionX, int positionY, string type, char color) {
    this->positionX = positionX;
    this->positionY = positionY;
    this->type = type;
    this->color = color;
    string p = type+(color);



}


string Piece::getName() {
    string name = this->type+this->color;
  //  std::cout <<"Here: "<< type<< color<<endl;
    return name;

}

void Piece::move() {}
int Piece::getPosistionX() {
    return positionX;
}
int Piece::getPosistionY() {
    return positionY;
}

Piece::Piece() {

}
