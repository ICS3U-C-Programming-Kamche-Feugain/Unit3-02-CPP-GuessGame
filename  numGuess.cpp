// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Oct 9, 2026
// This program checks if the user guessed the right answer
#include <iostream>

int main() {
    // Create a constant for the correct number
    const int CORRECT_NUMBER = 5;

    // Ask the user to guess a number between 0 and 9
    int guess;
    std::cout << "Guess a number between 0 and 9:";
    std::cin >> guess;

    // Check if the guess is correct
    if (guess == CORRECT_NUMBER) {
        std::cout << "You have guessed the correct number!!!" << std::endl;
    }

    // Check if the guess is incorrect
    if (guess != CORRECT_NUMBER) {
        std::cout << "You have guessed the wrong number!!!" << std::endl;
        std::cout << "Did you get it wrong? Well, don't worry, just try again!" << std::endl;
    }
    return 0;
}
