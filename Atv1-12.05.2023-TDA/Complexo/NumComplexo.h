#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
    double real;
    double imag;
} Complex;

Complex createComplex(double x, double y);

void destroyComplex(Complex *complex);

Complex addComplex(Complex complex1, Complex complex2);

Complex subComplex(Complex complex1, Complex complex2);

Complex multiComplex(Complex complex1, Complex complex2);

Complex divideComplex(Complex complex1, Complex complex2);

#endif /* COMPLEX_H */
