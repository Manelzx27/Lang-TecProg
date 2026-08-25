#include <stdio.h>
#include <stdlib.h>

/* Exercício 2 linguagem e técnicas de programação */

int main(int argc, char *argv[]) {
	float b, h; // float para número reais
	printf("Digite a base a a altura do triangulo respectivamente: ");
	scanf("%f %f", &b, &h); //scanf é como um input e %f é como o %d, serve para identificar o tipo de valor da variável informada
	
	printf("\nA área do triangulo é %f %f", (b * h) / 2); 
	return 0;
}
