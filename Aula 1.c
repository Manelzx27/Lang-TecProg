#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a, b, c;
    float r1, r2, r3;

    a = 8;
    b = 19;

    r1 = a / b;
    r2 = a - b;
    r3 = a + b;
    c = a * b;

    printf("As operacoes entre %d e %d sao:\n", a, b);
    printf("Divisao = %.2f\n", r1);
    printf("Subtracao = %.2f\n", r2);
    printf("Soma = %.2f\n", r3);
    printf("Multiplicacao = %d\n", c);

    return 0;
}
