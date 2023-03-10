#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, res;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Insira o segundo numero: ");
	scanf("%f", &n2);
	
	res = n1 / n2;
	
	printf("O resultado de %.2f dividido %.2f = %.2f\n", n1, n2, res);
	
	return 0;
}