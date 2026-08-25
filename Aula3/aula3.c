#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

/* Terceira semana de aula de LTP */

int main(int argc, char *argv[]) {
	float raio, area;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	raio *= raio;
	area = pi*raio;
	
	printf("A area é: %f", area);

	printf("\nAgora vamos calcular a area do trapezio");
	float B, b, h, area2;
	
	printf("Digite a base maior, base menor e altura, respectivamente: ");
	scanf("%f %f %f", &B, &b, &h);
	
	area2 = ((B+b) * h) /2;
	
	printf("A area do trapezio e: %f", area2);
	
	
	
	return 0;
}
