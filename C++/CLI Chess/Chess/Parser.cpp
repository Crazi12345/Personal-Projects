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
    string wordOne;
    string wordTwo;
    string wordThree;
    cin >> wordOne >> wordTwo;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    cout << wordOne << wordTwo;
usleep(150000);

}

