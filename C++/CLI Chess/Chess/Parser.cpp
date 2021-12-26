//
// Created by patri on 19-11-2021.
//

#include "header/Parser.h"
#include <string>
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <limits>
#include <map>
using namespace std;

Parser::Parser() {

    letter.insert(pair<char, int>('a', 1));
    letter.insert(pair<char, int>('b', 2));
    letter.insert(pair<char, int>('c', 3));
    letter.insert(pair<char, int>('d', 4));
    letter.insert(pair<char, int>('e', 5));
    letter.insert(pair<char, int>('f', 6));
    letter.insert(pair<char, int>('g', 7));
    letter.insert(pair<char, int>('h', 8));

}

void Parser::Command(Player current, Player alternate) {
    this->alternate = alternate;
    this->current = current;
    cout << "\nPlease Input a Command:";
    words.clear();
    string command;
    getline(cin, command);
    string token;
    stringstream checker(command);

    while (getline(checker, token, ' ')) {
        words.push_back(token);
    }
try {
    if (words.at(0) == "select" && words.size() > 1) {
        selectCommand();
        return;
    } else if (words.at(0) == "move" && words.size() > 2) {

    } else if (words.at(0) == "help" && words.size() > 0) {
        helpCommand();
    } else {
        cout << "i dont understand" << endl;
        Command(current, alternate);

    }
}
catch (exception e){
    Command(current, alternate);
}
}


void Parser::helpCommand() {
    cout << endl;
    cout << "select" << "  " << "letter posistion" << "  " << "number posistion" << endl;
    cout << "move" << "  " << "a1" << " " << "a1" << endl;


}

void Parser::selectCommand() {
    auto key = (letter.find(words.at(1).at(0)));
    int y = (key->second)-1;

    int a  = static_cast<int>(words.at(1).at(1));
    int x = (AsciiToInt(a)-1);

    for(int i = 0; i<7;i++){
        for(int j =0; j<7;j++){
            for(int k = 0; k<current.getPieces().size();k++){
               if(current.getPieces().at(k).getPosistionX()==x && current.getPieces().at(k).getPosistionY()==y){
                  printPieceName(current.getPieces().at(k));
                   return;
               }

            }
        }
    }
    Command(current, alternate);
}



void Parser::moveCommand(){
    auto key = (letter.find(words.at(1).at(0)));
    int y_one = (key->second)-1;

    int a  = static_cast<int>(words.at(1).at(1));
    int x_one = (AsciiToInt(a)-1);


    key = (letter.find(words.at(2).at(0)));
    int y_two = (key->second)-1;

     a  = static_cast<int>(words.at(2).at(1));
    int x_two = (AsciiToInt(a)-1);



}



void Parser::printWord() {

    for (int i = 0; i < words.size(); i++) {
        cout << words.at(i) << endl;
    }
}

void Parser::printPieceName(Piece piece){
    int switcher = static_cast<int>(piece.getName().at(0));
    switch (switcher) {
    case 'R':
        cout << current.getFullName() << "  "<< "Rook" << endl;
        break;
    case 'H':
        cout << current.getFullName() << "  "<< "Knight" << endl;
        break;
    case 'B':
        cout << current.getFullName() << "  "<< "Bishop" << endl;
        break;
    case 'Q':
        cout << current.getFullName() << "  "<< "Queen" << endl;
        break;
    case 'K':
        cout << current.getFullName() << "  "<< "King" << endl;
        break;
    case 'P':
        cout << current.getFullName() << "  "<< "Pawn" << endl;
        break;
    default:

        break;
    }
}

int Parser::AsciiToInt(int ascii) {

    switch(ascii){
        case 49:
            return 1;
        case 50:
            return 2;
        case 51:
            return 3;
        case 52:
            return 4;
        case 53:
            return 5;
        case 54:
            return 6;
        case 55:
            return 7;
        case 56:
            return 8;
        default:
            return 0;


    }


}
