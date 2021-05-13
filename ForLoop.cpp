// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses a for loop

#include <iostream>
#include <string>

int main() {
    // this function uses a for loop
    std::string integerAsString;
    int integerAsNumber;
    int loopCounter = 0;
    int square = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // process and output
    try {
        integerAsNumber = std::stoi(integerAsString);

        if (integerAsNumber > 0) {
            for (loopCounter = 0, square = 0; loopCounter <=
            integerAsNumber; loopCounter++) {
                square = (loopCounter * loopCounter);
                std::cout << loopCounter << "² = " << square << std::endl;
            }
        } else {
            std::cout << "This is a negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not valid input.";
    }
}
