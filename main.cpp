//
// Created by JP Heck on 3/16/2020.
//
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){

    ifstream inputFile(argv[1]);
    ofstream outputFile(argv[2]);

    outputFile << "Hello World" << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}