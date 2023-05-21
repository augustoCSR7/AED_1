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

int main() {
    Cubo meuCubo;
    float lado;

    printf("Digite o tamanho do lado do cubo: ");
    scanf("%f", &lado);

    inicializarCubo(&meuCubo, lado);

    printf("Tamanho do lado: %.2f\n", tamanhoLado(&meuCubo));
    printf("Área: %.2f\n", calcularArea(&meuCubo));
    printf("Volume: %.2f\n", calcularVolume(&meuCubo));

    return 0;
}
