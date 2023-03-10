#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float angulo1, angulo2, angulo3;
	
	printf("Insira o valor do Angulo 1 do triangulo: ");
	scanf("%f", &angulo1);
	
	printf("Insira o valor do Angulo 2 do triangulo: ");
	scanf("%f", &angulo2);
	
	angulo3 = 180 - (angulo1 + angulo2);
	
	printf("O valor do terceiro angulo e: %.2f\n", angulo3);
	
	return 0;
}