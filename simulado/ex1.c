#include <stdio.h>

void permutar( int *x,  int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
     int a, b, c, d;

    printf("Digite o valor de A: ");
    scanf("%u", &a);

    printf("Digite o valor de B: ");
    scanf("%u", &b);

    printf("Digite o valor de C: ");
    scanf("%u", &c);

    printf("Digite o valor de D: ");
    scanf("%u", &d);

    printf("\nOrdem original .....: A=%u, B=%u, C=%u, D=%u\n", a, b, c, d);

    
    permutar(&a, &c); 
    permutar(&b, &d); 


    printf("Apos a permutacao ..: A=%u, B=%u, C=%u, D=%u\n", a, b, c, d);
    printf("(equivale a apresentar os valores originais na ordem C, A, D, B)\n");

    return 0;
}
