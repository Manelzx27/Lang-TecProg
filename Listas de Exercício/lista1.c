#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

/* Lista 1 */

int main(int argc, char *argv[]) {
//Exercício 1
	int num1, num2, aux; //definimos a variável aux para auxiliar no que vem pela frente
	
	printf("Exercício 1\n");
	
	printf("Insira o valor do primeiro número: ");
	scanf("%d", &num1);
	
	printf("Insira o valor do segundo número: ");
	scanf("%d", &num2);
	
	aux = num1;
	num1 = num2;
	num2 = aux;
	
	printf("Números invertidos: %d e %d\n", num1, num2);
//Exercício 2
	printf("Exercício 2\n");
	double nd;
	
	printf("Digite um numero double: ");
	scanf("%lf", &nd);
	
	printf("Em notacao cientifica... %e", nd); //%e e %E deixam em notação, a diferença das duas é o tamanho do e aparecendo no terminal
	

//Exercício 3
	printf("\nExercicio 3\n");
	int n;
	int b1, b2, b3, b4, b5,b6,b7;
	printf("Digite um número: ");
	scanf("%d", &n); //Confesso que quebrei a cabeça, mas entendi que podia aplicar o sistema de conversão em "tabela de conversão" que o Cidão ensinou
	//Para 13
	b1 = n/64; //0 pq não cabe
	n = n % 64; //13
	
	b2 = n/32; //0 não cabe
	n = n % 32; //13
	
	b3 = n/16; //0 pq não cabe
	n = n %16; //13
	
	b4 = n/8; //Vai 1 pq cabe
	n = n%8; // Sobra 5
	
	b5 = n/4; //Vai 1 pq cabe
	n = n%4; //Sobra 1
	
	b6 = n/2; //0 pq não cabe
	n = n%2; //Sobra 1
	
	b7 = n; //Se torna a sobra que é 1
	
	printf("Em binário: %d %d %d %d %d %d %d", b1, b2, b3, b4, b5, b6, b7); //Printa 0001101
	
//Exercício 4
	printf("\nExercício 4\n");
	
	float sf, vv, com;
	
	printf("Digite seu salario fixo: ");
	scanf("%f", &sf);
	
	printf("Digite o valor das suas vendas: ");
	scanf("%f", &vv);
	
	com = vv * 0.15; 
	sf += com;
	
	printf("Seu salario fixo + a comissao e igual a: %.2f", sf); //%.nºf significa o número de casas após a vírgula
	
//Exercício 5
	printf("\nExercício 5\n");
	
	int a, b, c, d, sum, med, prod;
	
	printf("Digite 4 numeros: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	sum = a + b + c + d;
	med =  (a+b+c+d) / 4;
	prod = a*b*c*d;
	
	printf("Soma: %d\nMédia: %d\nProdutorio %d", sum, med, prod); //Tinha me esquecido o que é um produtório, mas logo lembrei
	
//Exercício 6

	printf("\nExercício 6\n");
	
	int idadedias, ano, mes, dia, aux2; //Essa deu um erro engraçado quando fui rodar todas juntas, o bocó aqui esqueceu que já tinha um aux, aí só troquei pra aux2
	
	printf("Digite sua idade em dias: ");
	scanf("%d", &idadedias);
	
	ano = idadedias / 365;
	aux2 = idadedias % 365;
	mes = aux2 / 30;
	dia = aux2 % 30;  
	
	printf("Sua idade é de aproximadamente... %d anos, %d meses e %d dias.", ano, mes, dia); 
	
//Exercício 7
	printf("\nExercício 7\n");
	
	float raio, vol;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	vol = (4.0/3) * pi * (raio *raio * raio); //Podia usar o pow, mas achei chato
	
	printf("O volume é: %f", vol);
	
//Exercício 8

	printf("\nExercício 8\n");	
	float x1, y1, x2, y2, dist, dfinal;
	
	printf("Digite a coordenada do ponto 1 (eixo x e eixo y): ");
	scanf("%f %f", &x1, &y1);
		
	printf("Digite a coordenada do ponto 2 (eixo x e eixo y): ");
	scanf("%f %f", &x2, &y2);
	
	dist = (((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));//Poderia ter facilitado com o pow, mas quando percebi deu preguiça de mudar, 
												   //fica difícil entender vendo, mas se executar o resultado é o mesmo ;)
	
	dfinal = sqrt(dist);
	
	printf("A distancia entre os pontos é: %.2f", dfinal);
	

	return 0;
}
