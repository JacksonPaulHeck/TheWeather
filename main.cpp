//
// Created by JP Heck on 3/16/2020.
//
#include <fstream>
#include "Driver.h"

using namespace std;

int main(int argc, char** argv){

    ifstream inputFile(argv[1]);
    ofstream outputFile(argv[2]);

    char line[100];
    inputFile.getline(line, 100, '\n');

    int numOfInputs = atoi(line);

    char** city = new char*[numOfInputs];
    char** state = new char*[numOfInputs];
    int temp[numOfInputs];
    int high[numOfInputs];
    int low[numOfInputs];
    char** weather = new char*[numOfInputs];

    populateArrays(line, city, state, temp, high, low, weather, inputFile, numOfInputs);
    printArrays(numOfInputs, city, state, temp, high, low, weather, outputFile);

    for(int i = 0; i < numOfInputs; i++){
        delete[] city[i];
        delete[] state[i];
        delete[] weather[i];
    }
    delete[] city;
    delete[] state;
    delete[] weather;

    inputFile.close();
    outputFile.close();

    return 0;
}