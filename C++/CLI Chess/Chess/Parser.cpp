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

void Parser::Command(Player current) {
    words.clear();
    string command;
    getline(cin, command);
    string token;
    stringstream checker(command);

    while (getline(checker, token, ' ')) {
        words.push_back(token);
    }

    if (words.at(0) == "select" && words.size()>1) {
        selectCommand(current);
    } else if (words.at(0) == "move" && words.size()>2) {

    } else if (words.at(0) == "help" && words.size()>0) {
        helpCommand();
    } else {
        cout << "i dont understand" << endl;
        Command(current);

    }
}


void Parser::helpCommand() {
    cout << endl;
    cout << "select" << "  " << "letter posistion" << "  " << "number posistion" << endl;
    cout << "move" << "  " << "a1" << " " << "a1" << endl;


}

void Parser::selectCommand(Player current) {
    char x = (letter.find(words.at(1).at(0)));
    int y = stoi(words.at(1));
    Piece selected;
    for(int i = 0; i<7;i++){
        for(int j =0; j<7;i++){
            for(int k = 0; k<current.getPieces().size();k++){
               if(current.getPieces().at(k).getPosistionX()==x && current.getPieces().at(k).getPosistionY()==y){

               }
            }
        }
    }
}

void Parser::printWord() {

    for (int i = 0; i < words.size(); i++) {
        cout << words.at(i) << endl;
    }
}
