#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("Informe o primeiro numero: ");
	scanf("%i", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%i", &num2);
	
	num3 = num1 - num2;
	
	printf("O resultado da subtracao de %i por %i e igual a: %i\n", num1, num2, num3);
	
	return 0;
}
