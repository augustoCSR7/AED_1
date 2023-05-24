#include <stdio.h>
#include <stdlib.h>
#include "NumComplexo.h"

int main() {
    Complex complex1 = createComplex(2.0, 3.0);
    Complex complex2 = createComplex(4.0, -1.0);

    Complex sum = addComplex(complex1, complex2);
    Complex subtraction = subComplex(complex1, complex2);
    Complex multiplication = multiComplex(complex1, complex2);
    Complex division = divideComplex(complex1, complex2);

    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Subtraction: %.2f + %.2fi\n", subtraction.real, subtraction.imag);
    printf("Multiplication: %.2f + %.2fi\n", multiplication.real, multiplication.imag);
    printf("Division: %.2f + %.2fi\n", division.real, division.imag);

    return 0;
}