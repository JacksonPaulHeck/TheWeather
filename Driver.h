//
// Created by JP Heck on 3/16/2020.
//
#include <iostream>
#include <cstring>
#include <sstream>

#ifndef THEWEATHER_DRIVER_H
#define THEWEATHER_DRIVER_H
using namespace std;

void populateArrays(char*, char**, char**, int*, int*, int*, char**, istream&, int);
void printArrays(int, char**, char**, int*, int*, int*, char**, ostream&);

#endif //THEWEATHER_DRIVER_H
