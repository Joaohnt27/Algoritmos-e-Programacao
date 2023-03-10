#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, base_maior, base_menor, altura;
	
	printf("Informe o valor da base maior do trapezio: ");
	scanf("%f", &base_maior);
	
	printf("Informe o valor da base menor do trapezio: ");
	scanf("%f", &base_menor);
	
	printf("Informe o valor da altura do trapezio: ");
	scanf("%f", &altura);
	
	area = (base_maior + base_menor) * altura / 2;
	
	printf("O valor da area do trapezio e: %.2f\n", area);
	
	return 0;
}