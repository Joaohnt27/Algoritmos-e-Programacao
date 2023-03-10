#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1, num2, num3, res;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Informe o terceiro numero: ");
	scanf("%f", &num3);
	
	res = num1 * num2 * num3;
	
	printf("O resultado da multiplicacao de %.2f x %.2f x %.2f = %.2f\n", num1, num2, num3, res);
	
	return 0;
}