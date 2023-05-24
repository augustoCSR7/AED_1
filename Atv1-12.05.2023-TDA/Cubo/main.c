#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

int main(void) {
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
