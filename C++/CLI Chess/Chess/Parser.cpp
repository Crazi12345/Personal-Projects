//
// Created by patri on 19-11-2021.
//

#include "Parser.h"
#include <string>
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <limits>

using namespace std;
Parser::Parser() {



}

void Parser::Command() {
    words.clear();
    string command;
    int index = 0;
    getline(cin,command);
   // cout << command;
   string token;
   stringstream checker(command);

   while(getline(checker,token,' ')){
       words.push_back(token);
   }
usleep(150000);


}

std::string Parser::getFullWord() {
    return wordOne+wordTwo+wordThree;
}

void Parser::printWord() {

    for(int i = 0; i<words.size();i++){
        cout << words.at(i) << endl;
    }
}