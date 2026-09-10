#include <stdio.h>
#include <stdlib.h>

//exercicios 7 e 8

float calc_inss(float salario){	
	if(salario <= 1412.00) return salario * 0.075;
	else if(salario <= 2666.68) return salario * 0.09;
	else if(salario <= 4000.00) return salario * 0.12;
	else return salario * 0.14;	
}

float calc_irpf(float salario_base){
	float salario;
	salario_base = salario - calc_inss(salario);
	
	if(salario_base <= 2259.20) return salario_base;
	else if(salario_base > 2259.20 && salario_base <= 2836.65) return (salario_base * 0,075) - 169.44;
	else if(salario_base > 2836.65 && salario_base <= 3751.05) return (salario_base * 0,15) - 381.44;
	else if(salario_base > 3751.05 && salario_base <= 4664,68) return (salario_base * 0.225)- 662.77;
	else return (salario_base * 0.275) - 896.00;
}

int main(int argc, char *argv[]) {
	
	float salario, salario_base, desconto_inss, desconto_irpf;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	desconto_inss = calc_inss(salario);
	desconto_irpf = calc_irpf(salario_base);
	
	printf("O desconto do INSS e: %f ", desconto_inss);
	printf("O desconto total do Imposto de renda e: %f", desconto_irpf);
	
	return 0;
}
