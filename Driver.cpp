//
// Created by JP Heck on 3/16/2020.
//

#include "Driver.h"

void populateArrays(char* line, char** city, char** state, int* temp, int* high, int* low, char** weather, istream & inputFile){
    int i = 0;
    int j = 0;
    while(!inputFile.eof()){
        inputFile.getline(line, 100);
        stringstream ss;
        ss << line;
        char tempChar[70];
        while(!ss.eof()) {
            ss.getline(tempChar, 70, ',');
            switch (i % 6) {
                case (1):
                    i++;
                    state[j] = new char[70];
                    strcpy(state[j], tempChar);
                    break;
                case (2):
                    i++;
                    temp[j] = atoi(tempChar);
                    break;
                case (3):
                    i++;
                    high[j] = atoi(tempChar);
                    break;
                case (4):
                    i++;
                    low[j] = atoi(tempChar);
                    break;
                case (5):
                    i++;
                    weather[j] = new char[70];
                    strcpy(weather[j], tempChar);
                    break;
                default:
                    i++;
                    city[j] = new char[70];
                    strcpy(city[j], tempChar);
                    break;
            }
        }
        j++;
    }
}

void printArrays(int numOfInputs, char** city, char** state, int* temp, int* high, int* low, char** weather, ostream & outputFile){
    for(int i = 0; i < numOfInputs; i++){
        outputFile << "In " << city[i] << " " << state[i] << ", it is " << temp[i] << " degrees. With a high of "
        << high[i] << " and a low of " << low[i] << ". It is going to be " << weather[i] << '\n' << endl;
    }
}