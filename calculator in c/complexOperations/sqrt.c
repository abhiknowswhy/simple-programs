#include "complexOperations.h"
#include "../basicOperations/operations.h"  // Include basic operations
#include <stdio.h>

double squareRoot(double num) {
    if (num < 0) {
        printf("Error: Negative number cannot have a real square root.\n");
        return -1; // Error value for negative input
    }

    double guess = num / 2.0;  // Initial guess
    double result;

    // Iterate until the guess is sufficiently accurate
    for (int i = 0; i < 1000; i++) {
        result = divide(add(guess, divide(num, guess)), 2);  // Babylonian formula
        if (result == guess) {
            break;  // If the guess doesn't change, we are done
        }
        guess = result;
    }

    return result;
}
