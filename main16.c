#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float reais, dolar, marco_alemao, libra;
	
	printf("Informe a quantidade de dinheiro em reais: ");
	scanf("%f", &reais);
	
	dolar = reais / 1.80;
	marco_alemao = reais / 2.00;
	libra = reais / 3.57;
	
	printf("A conversao de reais em dolar e: %.2f\n", dolar);
	printf("A conversao de reais em marco alemao e: %.2f\n", marco_alemao);
	printf("A conversao de reais em libras esterlinas e: %.2f\n", libra);
	
	return 0;
}