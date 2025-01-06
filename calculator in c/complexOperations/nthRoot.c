#include "complexOperations.h"
#include "../basicOperations/operations.h"  // Include basic operations
#include <stdio.h>

double nthRoot(double num, double n) {
    if (num < 0 && (int)n % 2 == 0) {
        printf("Error: Negative number cannot have an even root.\n");
        return -1; // Error value for invalid input
    }

    double guess = num / 2.0;  // Initial guess
    double result;

    // Iterate until the guess is sufficiently accurate
    for (int i = 0; i < 1000; i++) {
        result = divide(add(multiply(n - 1, guess), divide(num, exponent(guess, n - 1))), n);  // Newton's method
        if (result == guess) {
            break;  // If the guess doesn't change, we are done
        }
        guess = result;
    }

    return result;
}
