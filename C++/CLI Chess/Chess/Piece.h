//
// Created by patri on 15-11-2021.
//
#pragma once
#include "Board.h"
#include <string>
using namespace std;
class Piece
{


public:
    Piece(int posistionX,int posistionY, string type, string color);
    string getName();
    int getPosistionX();
    int getPosistionY();
    void move();



private:
    int positionX;
    int positionY;
    string type;
    string color;
    string p;
    //Board board;
};

