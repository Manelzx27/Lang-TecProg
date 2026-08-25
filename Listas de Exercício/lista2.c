#include <stdio.h>
#include <stdlib.h>
#define anoatual 2026
#define pi 3.141592

/* Olá, seja bem vindo à segunda lista de exercícios da matéria de LTP
    ministrado pelo professor Dacio Machado na Cesu*/

int main(int argc, char *argv[]) {
	printf("Lista 2 - Exercício 1\n");
	int idade, anonascimento;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	anonascimento = anoatual - idade;
	
	printf("O ano do seu nascimento é: %d", anonascimento); //Tá batendo a idade, sinto até a coluna doer (Leonardo de 17 anos)

	printf("\nExercício 2\n");
	float kmh, ms;
	
	printf("Digite uma velocidade em km/h: ");
	scanf("%f", &kmh);
	
	ms = kmh / 36;
	
	printf("A velocidade convertida para m/s é: %.2f", ms); //Minhas aulas de física não foram atoa
	
	printf("\nExercício 3\n");
	
	float valorreal, cotacao, rpd;
	
	printf("Digite um valor em real R$ (salário, compra, etc): ");
	scanf("%f", &valorreal);
	
	printf("Digite a cotação do dólar americano: ");
	scanf("%f", &cotacao);
	
	rpd = valorreal / cotacao;
	
	printf("O valor em dolares americanos é: %f", rpd); //Quase fiz uma burrada trocando o / por um *
	

	printf("\nExercício 4\n");
	float fahr, cels;
	
	printf("Digite a temperatura em °C: ");
	scanf("%f", &cels);
	
	fahr = cels * (9.0/5.0) + 32.0; //Meu teclado não tem ° sorte a minha que existe ctrl + C e ctrl + V
	
	printf("A temperatura em convertida é %.2f°F", fahr);
	
	printf("\nExercício 5\n");
	float graus, rad;
	
	printf("Digite um ângulo em graus: ");
	scanf("%f", &graus);
	
	rad = graus * (pi / 180);
	
	printf("O ângulo em radianos é: %f", rad); //Odeio ângulos
	
	printf("\nExercício 6\n");
	int numb; //Numb de number, mas já veio Linkin Park na mente
	
	printf("Digite um número: ");
	scanf("%d", &numb);
	
	printf("Antecessor: %d\n", numb - 1);
	printf("Número digitado: %d\n", numb);
	printf("Sucessor: %d", numb + 1);
	
	printf("\nExercício 7\n");
	float pri, seg, ter;
	
	printf("Começaremos a entrega dos prêmios do concurso de melhores alunos do Dacio custeado por R$780.000,00 diretamente do bolso do professor...\n");
	
	pri = 780000 * 0.46;
	seg = 780000 * 0.32;
	ter = 780000 - (pri + seg); //Poderia ter usado (*0.22), mas preferi fazer assim
	
	printf("Primeiro lugar, vai receber: %f\n", pri);
	printf("Segundo lugar, vai receber: %f\n", seg);
	printf("Terceiro lugar, vai receber: %f", ter);
	
	printf("\nExercício 8\n");
	int tempototal, segundos, minutos, horas;
	
	printf("Digite o tempo de duração de um evento: ");
	scanf("%d", &tempototal);
	
	horas = tempototal / 3600;
	tempototal = tempototal % 3600;
	minutos = tempototal / 60; 
	tempototal = tempototal % 60;
	segundos = tempototal;
	
	printf("O tempo de duração do evento foi de %d:%d:%d", horas, minutos, segundos); //Usa praticamente a mesma lógica do exercício 3 da primeira lista
	                                                                                  //Mas aplicado à minutos e não bits
	
	printf("\nExercício 9\n");
	float temh, vmkmh, distancia, conscomb; //Seguindo a regra do carro que faz 12km/L no enunciado
	
	printf("Tempo de viagem (em horas): ");
	scanf("%f", &temh);
	
	printf("Velocidade média do carro (em km/h): ");
	scanf("%f", &vmkmh);
	
	distancia = vmkmh * temh;
	conscomb = distancia / 12; //Poderia otimizar fazendo (V * T) / 12, mas preferi fazer assim
	
	printf("O carro, vai precisar de %.3f L de gasolina", conscomb);
	
	
	printf("\nExercício 10\n");
	int a, b, c, maiorab, maiorabc;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	printf("Digite o terceiro número: ");
	scanf("%d", &c);
	
	maiorab = (a + b + abs(a - b)) / 2; 
	
	maiorabc = (maiorab + c + abs(maiorab - c)) / 2; //Agoniado por não poder usar if e else :(
	
	printf("%d eh o maior", maiorabc);
	
	return 0;
}
