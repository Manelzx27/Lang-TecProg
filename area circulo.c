#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#define pi 3.141592



int main(int argc, char *argv[]) {
	
	float area, raio;
	
	printf("insira o raio do circulo");
	scanf("%f", &raio);
	

    //area = M_pi* pow(raio,2);
    area = pi*(raio*raio);
    
    printf("A area do circulo de raio %f = %f", raio, area);
    
	
	return 0;
}
