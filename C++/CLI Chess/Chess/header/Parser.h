//
// Created by patri on 19-11-2021.
//

#ifndef CHESS_PARSER_H
#define CHESS_PARSER_H

#include <string>
#include <vector>
#include <map>
#include "Player.h"

class Parser {
public:
    Parser();
    void Command(Player current);
    bool validCommand;
    void selectCommand(Player current);
    void moveCommand(Player current);
    void helpCommand();
    void printWord();

private:
    std::vector<std::string> words;
    int indexForCommand=0;
    std::string wordOne;
    std::string wordTwo;
    std::string wordThree;
    std::map<char,int> letter;

};


#endif //CHESS_PARSER_H
