//
// Created by JP Heck on 3/16/2020.
//

#include "Driver.h"

void populateArrays(char* line, char** city, char** state, int* temp, int* high, int* low, char** weather, istream & inputFile, int numOfInputs){
    char tempChar[70];
    for(int j = 0; j < numOfInputs; j++){
        inputFile.getline(line, 100);
        stringstream ss;
        ss << line;
        for(int i = 0; i < 6; i++) {
            ss.getline(tempChar, 70, ',');
            switch (i % 6) {
                case (1):
                    strcpy(state[j], tempChar);
                    break;
                case (2):
                    temp[j] = atoi(tempChar);
                    break;
                case (3):
                    high[j] = atoi(tempChar);
                    break;
                case (4):
                    low[j] = atoi(tempChar);
                    break;
                case (5):
                    strcpy(weather[j], tempChar);
                    break;
                default:
                    strcpy(city[j], tempChar);
                    break;
            }
        }
    }
}

void printArrays(int numOfInputs, char** city, char** state, int* temp, int* high, int* low, char** weather, ostream & outputFile){
    for(int i = 0; i < numOfInputs; i++){
        outputFile << "In " << city[i] << " " << state[i] << ", it is " << temp[i] << " degrees. With a high of "
        << high[i] << " and a low of " << low[i] << ". It is going to be " << weather[i] << '\n' << endl;
    }
}