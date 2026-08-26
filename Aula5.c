#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int a, b, c, r;
	
	printf("Digite três valores respectivamente: ");
	scanf("%d %d %d", &a, &b, &c);
	
	
	if (a>b && a >c) {
		r = a;
	}
	else if (b > c && b >a) {
		r = b;
	}
	else{
		r = c;
	}
	printf("%d", r);
	
	return 0;
}
