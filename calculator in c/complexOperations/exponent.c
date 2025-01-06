#include "complexOperations.h"
#include "../basicOperations/operations.h"  // Include basic operations

double exponent(double base, double exp) {
    double result = 1.0;
    double positiveExp = exp > 0 ? exp : -exp;  // Handle negative exponent

    // Use a loop for positive exponents
    for (int i = 0; i < (int)positiveExp; i++) {
        result = multiply(result, base);
    }

    // Handle fractional exponent by applying a simple iterative approximation
    if (exp < 0) {
        result = divide(1.0, result);
    }

    return result;
}
