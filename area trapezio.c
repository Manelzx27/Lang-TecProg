#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float base_maior,base_menor,altura,area;
	
	printf("Altura do Trapezio: ");
	scanf("%f", &altura);

	printf("Base Maior: ");
	scanf("%f", &base_maior);
	
	printf("Base Menor: ");
	scanf("%f", &base_menor);
	
	area = (base_maior + base_menor) * altura / 2;
	printf("Area do trapezio: %f", area);
	
	return 0;
}
