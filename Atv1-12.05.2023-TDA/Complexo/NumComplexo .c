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

Complex subComplex(Complex complex1, Complex complex2) {
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