// Copyright (c) 2020 Wenda Zhao All rights reserved
//
// Created by Wenda Zhao
// Created on Nov 2020
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 25;

void localCariable() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " <<variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " <<variableZ << std::endl;
}

int main() {
    // this funtion calls local and global

    localCariable();
    globalVariable();
}
