#include <stdio.h>

/* Exercicio 1:
   Le 3 valores: inicio, fim e passo.
   Conta do inicio ate o fim, avancando de "passo" em "passo". */
void exercicio1(void)
{
    int inicio, fim, passo, i;

    printf("Digite o primeiro valor: ");
    scanf("%d", &inicio);
    printf("Digite o segundo valor: ");
    scanf("%d", &fim);
    printf("Digite o passo da contagem: ");
    scanf("%d", &passo);

    if (passo <= 0) {
        printf("O passo precisa ser maior que zero.\n");
        return;
    }

    for (i = inicio; i <= fim; i += passo) {
        printf("%d ", i);
    }
    printf("\n");
}

/* Exercicio 2:
   Soma dos n primeiros termos da sequencia 1/2, 1/4, 1/8, 1/16, ...
   Cada termo e metade do anterior. */
void exercicio2(void)
{
    int n, i;
    double termo = 1.0, soma = 0.0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        termo = termo / 2.0;
        soma += termo;
    }

    printf("Soma dos %d primeiros termos = %.10f\n", n, soma);
}

/* Exercicio 3:
   Triangulo de Pascal com n linhas.
   Cada elemento e C(i, j), calculado a partir do anterior da mesma linha:
   C(i, j+1) = C(i, j) * (i - j) / (j + 1) */
void exercicio3(void)
{
    int n, i, j, k;
    long long c;

    printf("Quantas linhas do triangulo de Pascal? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (k = 0; k < n - i - 1; k++) {
            printf("  ");
        }
        c = 1;
        for (j = 0; j <= i; j++) {
            printf("%4lld", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main(void)
{
    int opcao;

    printf("1 - Contagem com passo\n");
    printf("2 - Soma da sequencia 1/2, 1/4, 1/8...\n");
    printf("3 - Triangulo de Pascal\n");
    printf("Escolha o exercicio: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: exercicio1(); break;
        case 2: exercicio2(); break;
        case 3: exercicio3(); break;
        default: printf("Opcao invalida.\n");
    }
    return 0;
}
