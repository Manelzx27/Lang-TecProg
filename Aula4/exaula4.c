#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Aula 4 de LTP do prof Dacio */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese"); // Descobri o locale.h para setar a linguagem em portugues e permitir printf com acento (é, ú, ô, etc)
	int a, b, c, d, e, maiorab, maiorabc, maiorabcd, maiorabcde;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &c);
	
	printf("Digite o quarto número: ");
	scanf("%d", &d);
	
	printf("Digite o quinto número: ");
	scanf("%d", &e);
	
	maiorab = (a + b + abs(a - b)) / 2; 
	maiorabc = (maiorab + c + abs(maiorab - c)) / 2;
	maiorabcd =(maiorabc + d + abs(maiorabc-d)) / 2;
	maiorabcde = (maiorabcd + e + abs(maiorabcd - e)) /2;
	
	printf("Entre %d|%d|%d|%d|%d = %d é o maior", a,b,c,d,e, maiorabcde);
	
	return 0;
}
