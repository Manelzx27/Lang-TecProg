#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int funcmaior(int a, int b){
	if (a > b) return a;
	else return b;
}

int funcmenor(int a, int b){
	if(a<b) return a;
	else return b;
}

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int vetor[10];
	int i, maior, menor;
	
	for (i = 0; i < 10; i++){
		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	menor = vetor[5];
	
	for (i = 1; i < 5; i += 2){
		int temp = funcmaior(vetor[i],vetor[i+1]);
		maior = funcmaior(maior, temp);
			
	}
	printf("%d é o maior entre os 5 primeiros", maior);
	for (i = 6; i < 10; i += 2){
		int temp2 = funcmenor(vetor[i], vetor[i+1]);
		menor = funcmenor(menor, temp2);
		}


	printf("\n %d é o menor entre os 5 últimos", menor);
	return 0;
}
