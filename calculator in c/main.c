#include <stdio.h>
#include "basicOperations/operations.h"
#include "complexOperations/complexOperations.h"

int main() {
    int choice;
    double num1, num2, result;

    printf("Welcome to the Calculator!\n");
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exponentiation\n");
    printf("7. Square Root\n");
    printf("8. Nth Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        // Basic operations
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } else if (choice == 7) {
        // Square root
        printf("Enter a number: ");
        scanf("%lf", &num1);
    } else if (choice == 8) {
        // Nth root
        printf("Enter number and root value: ");
        scanf("%lf %lf", &num1, &num2);
    } else {
        // Other operations
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch (choice) {
        case 1: // Addition
            result = add(num1, num2);
            break;
        case 2: // Subtraction
            result = subtract(num1, num2);
            break;
        case 3: // Multiplication
            result = multiply(num1, num2);
            break;
        case 4: // Division
            result = divide(num1, num2);
            break;
        case 5: // Modulus
            result = modulus((int)num1, (int)num2);  // Casting to int for modulus
            break;
        case 6: // Exponentiation
            result = exponent(num1, num2);
            break;
        case 7: // Square root
            result = squareRoot(num1);
            break;
        case 8: // Nth Root
            result = nthRoot(num1, num2);
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
