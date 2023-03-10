#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float peso, peso_eng, peso_ema;
	
	printf("Informe o peso da pessoa: ");
	scanf("%f", &peso);
	
	peso_eng = peso * 1.15;
	peso_ema = peso * 0.8;
	
	printf("Se a pessoa engordar 15%%, o novo peso sera: %.2f\n", peso_eng);
	printf("Se a pessoa emagrecer 20%%, o novo peso sera: %.2f\n", peso_ema);
	
	return 0;
}