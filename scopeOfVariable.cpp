// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// modified by: Liam Csiffary
// modified on: may 5, 2021
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Global variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localVariable();
    globalVariable();
}
