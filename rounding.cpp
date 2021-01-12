// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program uses a rounds numbers to a given number of places


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

void Rounding(float &roundingNumberAsNumber, int placesAsNumber) {
    // this function rounds numbers

    // process
    roundingNumberAsNumber = roundingNumberAsNumber *
                             pow(10, placesAsNumber) + 0.5;

    roundingNumberAsNumber = static_cast<int>(roundingNumberAsNumber);

    roundingNumberAsNumber = roundingNumberAsNumber /
                             pow(10, placesAsNumber);
}

main() {
    // gets inputs and outputs final answer

    float roundingNumberAsNumber;
    std::string roundingNumberAsString;
    int placesAsNumber;
    std::string placesAsString;

    std::cout << "Enter number you would like to round: ";
    std::cin >> roundingNumberAsString;

    std::cout << "Enter how many places you would like to round to: ";
    std::cin >> placesAsString;
    std::cout << "" << std::endl;

    try {
        roundingNumberAsNumber = std::stof(roundingNumberAsString);
        placesAsNumber = std::stoi(placesAsString);

        if (placesAsNumber >= 0) {
            // call function
            Rounding(roundingNumberAsNumber, placesAsNumber);

            // output
            std::cout << "Rounded number: " <<
                         roundingNumberAsNumber << std::endl;
        } else {
            std::cout << "Number of places must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid rounding number or number of places" << std::endl;
        }
}

