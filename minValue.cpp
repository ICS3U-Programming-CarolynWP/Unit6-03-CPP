// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/12/18
// Generates 10 random numbers and uses a function and FOR IN loop
// To determine the smallest number. Displays this to user.

#include <array>
#include <iostream>
#include <random>

// Function to find the min value
template <size_t MAX>
int Find_Max_Value(std::array<int, MAX> arrayOfInt) {
    // Variables
    int minNumber = 100;
    int counter = 0;
    int currentNumber;

    // FOR IN loop to calculate the min value
    for (int currentNumber : arrayOfInt) {
        currentNumber = arrayOfInt[counter];
        if (minNumber > currentNumber) {
            minNumber = currentNumber;
        }
        counter = counter + 1;

        if (counter == 10) {
            break;
        }
    }

    // Return the min number to main()
    return minNumber;
}

// main()
int main() {
    // Variables
    const int MAX = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    int minNumber, counter, randomNumber;
    std::array<int, MAX > arrayOfIntegers;

    // FOR loop to add the random numbers to the list
    for (counter = 0; counter < MAX; counter++) {
        // creating a random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);
        // random number variable
        randomNumber = idist(rgen);
        arrayOfIntegers[counter] = randomNumber;
        std::cout << "Adding " << randomNumber << " To the list\n";
    }

    // Calling and displaying the function and function output
    minNumber = Find_Max_Value(arrayOfIntegers);
    std::cout << "The maximum number is " << minNumber;
}
