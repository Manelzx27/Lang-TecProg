#include <stdio.h>
#include <stlib.h>

int main() {
    int i, num;
    int maior = 0;
    int menor = 0;
 
    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);
 
        if (i <= 5) {
          
            if (i == 1 || num > maior) {
                maior = num;
            }
        } else {

            if (i == 6 || num < menor) {
                menor = num;
            }
        }
    }
 
    printf("\nMaior entre os 5 primeiros: %d\n", maior);
    printf("Menor entre os 5 restantes: %d\n", menor);
 
    return 0;
}
