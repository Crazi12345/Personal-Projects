//
// Created by patri on 19-11-2021.
//

#ifndef CHESS_PARSER_H
#define CHESS_PARSER_H

#include <string>
#include <vector>

class Parser {
public:
    Parser();
    void Command();
    bool validCommand;
    std::string getWordOne();
    std::string getWordTwo();
    std::string getWordThree();
    std::string getFullWord();
    void printWord();

private:
    std::vector<std::string> words;
    int indexForCommand=0;
    std::string wordOne;
    std::string wordTwo;
    std::string wordThree;


};


#endif //CHESS_PARSER_H
