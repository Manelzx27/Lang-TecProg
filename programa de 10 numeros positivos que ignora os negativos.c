#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    int numero, contador = 0, quantidade = 0;
    int soma = 0;
    float media;

    while (contador < 10) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            quantidade++;
        }

        contador++;
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;

        printf("\nSoma dos valores positivos: %d\n", soma);
        printf("Media dos valores positivos: %.2f\n", media);
    } else {
        printf("\nNenhum numero positivo foi digitado.\n");
    }

    return 0;
}

