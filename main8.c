#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float peso1, peso2;
	
	printf("Informe o peso da pessoa: ");
	scanf("%f", &peso1);
	
	peso2 = peso1 * 1000;
	
	printf("O peso em gramas e: %.2f\n", peso2);
	
	return 0;
}