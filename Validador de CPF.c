#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, soma1, resto1, verificador1, resto2, soma2, verificador2;
	
	printf("Digite seu CPF: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10, &dig11);
	
	printf("CPF: %d%d%d%d%d%d%d%d%d%d%d",dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11);
	
	soma1 = (dig1 * 10) + (dig2 * 9) + (dig3 * 8) + (dig4 * 7) + (dig5 * 6) + (dig6 * 5) + (dig7 * 4) + (dig8 * 3) + (dig9 * 2);
	soma2 = (dig1 * 11) + (dig2 * 10 ) + (dig3 * 9) + (dig4 * 8) + (dig5 * 7) + (dig6 * 6) + (dig7 * 5) + (dig8 * 4 ) + (dig9 * 3) + (dig10 * 2);
	
	resto1 = soma1 % 11;
	resto2 = soma2 % 11;
	
	if ((resto1 == dig10) && (resto2 == dig11)){ 
		printf("O CPF e valido");
		
	}else{ 
	 	prinf("O CPF e invalido");
	}
	
	return 0;
}
