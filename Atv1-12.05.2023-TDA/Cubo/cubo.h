//Arquivo .h
#ifndef CUBO_H
#define CUBO_H

typedef struct {
    float lado;
} Cubo;

void inicializarCubo(Cubo* cubo, float lado);

float tamanhoLado(Cubo* cubo);

float calcularArea(Cubo* cubo);

float calcularVolume(Cubo* cubo);

#endif  // CUBO_H
