#include <stdio.h>
#include <stdlib.h>

/* Exercício 4 de LTP */

int main(int argc, char *argv[]) {
	float R, area;
	printf("Digite o raio do círculo: ");
	scanf("%f", &R);
	
	area = 3.14 * (R*R); /*Estou considerando π como 3,14. 
	Até onde eu vi, não tem um operador aritmetico para potencia, 
	pesquisei sobre e descobri uma biblioteca, 
	mas não sei se o exercício permite*/
	printf("A área do círculo é: %f", area);
	return 0;
}
