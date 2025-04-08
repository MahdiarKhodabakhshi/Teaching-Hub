#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%f\n", atof("42.57"));      // 42.570000
    printf("%f\n", atof("45.3e3"));       // 45300.000000 (scientific notation)
    printf("%f\n", atof("-5?.346"));      // Stops at '?'; returns -5.000000
    printf("%f\n", atof("hello"));        // No valid number; returns 0.000000
    printf("%f\n", atof("  -99.99abc"));   // Returns -99.990000 after reading number
    return 0;
}
