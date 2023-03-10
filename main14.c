#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Eu posso tanto criar uma const float quanto setar um valor para "pi" normalmente (pi = 3.14)
int main(int argc, char *argv[]) {
	
	float raio, comprimento, area, volume;
	const float pi = 3.14; 
	
	printf("Informe o valor do raio de uma esfera: ");
	scanf("%f", &raio);
	
	comprimento = 2 * pi * raio;
	area = pi * (pow(raio,2));
	volume = (4.0/3.0) * pi * pow(raio, 3);
	
	printf("O valor do comprimento da esfera e: %.2f\n", comprimento);
	printf("O valor da area de uma esfera e: %.2f\n", area);
	printf("O valor do volume de uma esfera e: %.2f\n", volume);
	
	return 0;
}