//
// Created by patri on 15-11-2021.
//
#pragma once
#include "header/Board.h"
#include <string>
using namespace std;
class Piece
{


public:
    Piece();

    Piece(int posistionX, int posistionY, string type, char color);
    virtual string getName();
    virtual int getPosistionX();
    virtual int getPosistionY();
    virtual void move();




private:
    int positionX;
    int positionY;
    string type;
    string color;
    string p;
    //Board board;
};

