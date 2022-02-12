//
// Created by patri on 19-11-2021.
//

#include "Parser.h"
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

void Parser::Command() {

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
        Command();

    }
}
catch (exception e){
    Command();
}
}


void Parser::helpCommand() {
    cout << endl;
    cout << "select" << "  " << "letter posistion" << "  " << "number posistion" << endl;
    cout << "move" << "  " << "a1" << " " << "a1" << endl;


}

void Parser::selectCommand() {
   }


void Parser::moveCommand(){

}



void Parser::printWord() {

    for (int i = 0; i < words.size(); i++) {
        cout << words.at(i) << endl;
    }
}
/*
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
*/
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
