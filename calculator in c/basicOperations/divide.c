#include "operations.h"
#include <stdio.h>

double divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 if there's a division by zero
    }
    return num1 / num2;
}
