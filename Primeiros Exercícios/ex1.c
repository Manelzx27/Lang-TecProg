#include <stdio.h>
#include <stdlib.h>

/* Exercício 1 Linguagem e técnicas de programação*/

int main(int argc, char *argv[]) {
	int a, b;
	printf("Digite dois números: ");
	scanf("%d %d", &a, &b); //Definimos as variáveis com o scanf
	
	printf("\nSoma = %d", a + b); //"printa" a soma das duas variáveis
	

	/* %d informa ser um número inteiro sendo "printado"
	\n é para quebra de linha */
	return 0;
}
