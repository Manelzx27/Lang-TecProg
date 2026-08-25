#include <stdio.h>
#include <stdlib.h>

/* Exercício 3 da aula do professor Dacio, matéria de LTP (linguagem e técnicas de programação) */

int main(int argc, char *argv[]) {
	float a, b, c;
	printf("Escreva sua nota dos 3 trimestres para tirar a média: ");
	scanf("%f %f %f", &a, &b, &c); //recebe as 3 notas
	
	printf("\nSua média do anual é: %f", (a + b + c) / 3); //usa as notas recebidas e calcula a média anual do trimestre
	
	return 0;
}
