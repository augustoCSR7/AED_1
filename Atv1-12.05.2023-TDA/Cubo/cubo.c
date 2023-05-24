#include <stdio.h>
#include "cubo.h"

void inicializarCubo(Cubo* cubo, float lado) {
    cubo->lado = lado;
}

float tamanhoLado(Cubo* cubo) {
    return cubo->lado;
}

float calcularArea(Cubo* cubo) {
    return 6 * cubo->lado * cubo->lado;
}

float calcularVolume(Cubo* cubo) {
    return cubo->lado * cubo->lado * cubo->lado;
}