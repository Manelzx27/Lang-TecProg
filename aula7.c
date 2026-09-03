#include <stdio.h>
#include <stdlib.h>

 

//tipo nome(lista de parametros){
 // comandos
  //comandos...
//}

void exec3(){
	
	//faça um program que transforme C em F
      float C,F;
       printf("Digite a temperatura em Celsius:");
       scanf("%f", &C);
       F = (C * 9/5) + 32;
       printf("Temperatura em Fahrenheit: %.2f\n\n", F);
	
	
}
void exec2(){
	
	
	
	//faça um programa que leia um valor em reais e tranforme em dolares
	 float reais , cota;
	 printf("Insira a cotação e o valor \n");
	 scanf("%f %f", &cota , &reais);
	 printf("Os %f reais são %f trumps",reais , (reias/cota));
}
void exec8(){
	//URI 19999999999999999999
      int secs, horas ,min;
      printf("Insira o tempo em segundos");
      scanf("%f", &secs);
      horas = &sec/3600;
      mins = &sec/360;
	
	
	
	
}





int main(int argc, char *argv[]) {
int op ;
printf("Qual exercicio quer resolver :[2|3|8]");

switch(op){



    case 2:
     exec2();
    break;
    
	case 3:
      exec3();
    break;
	
	case 8: 
     exec8();
    break;

}







	return 0;
}
