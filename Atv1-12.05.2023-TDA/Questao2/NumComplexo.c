#include <stdio.h>
#include <stdlib.h>
#include "NumComplexo.h"

Complex createComplex(double x, double y) {
    Complex complex;
    complex.real = x;
    complex.imag = y;
    return complex;
}

void destroyComplex(Complex *complex) {
    free(complex);
}

Complex addComplex(Complex complex1, Complex complex2) {
    Complex result;
    result.real = complex1.real + complex2.real;
    result.imag = complex1.imag + complex2.imag;
    return result;
}

Complex subtractComplex(Complex complex1, Complex complex2) {
    Complex result;
    result.real = complex1.real - complex2.real;
    result.imag = complex1.imag - complex2.imag;
    return result;
}

Complex multiComplex(Complex complex1, Complex complex2) {
    Complex result;
    result.real = (complex1.real * complex2.real) - (complex1.imag * complex2.imag);
    result.imag = (complex1.real * complex2.imag) + (complex1.imag * complex2.real);
    return result;
}

Complex divideComplex(Complex complex1, Complex complex2) {
    Complex result;
    double divisor = (complex2.real * complex2.real) + (complex2.imag * complex2.imag);
    result.real = ((complex1.real * complex2.real) + (complex1.imag * complex2.imag)) / divisor;
    result.imag = ((complex1.imag * complex2.real) - (complex1.real * complex2.imag)) / divisor;
    return result;
}

int main() {
    Complex complex1 = createComplex(2.0, 3.0);
    Complex complex2 = createComplex(4.0, -1.0);

    Complex sum = addComplex(complex1, complex2);
    Complex subtraction = subtractComplex(complex1, complex2);
    Complex multiplication = multiComplex(complex1, complex2);
    Complex division = divideComplex(complex1, complex2);

    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Subtraction: %.2f + %.2fi\n", subtraction.real, subtraction.imag);
    printf("Multiplication: %.2f + %.2fi\n", multiplication.real, multiplication.imag);
    printf("Division: %.2f + %.2fi\n", division.real, division.imag);

    return 0;
}
