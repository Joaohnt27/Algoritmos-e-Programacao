#include <stdio.h>
#include <stdlib.h>
// É necessário incluir <math.h> para o código validar as expressões "pow" e "sqrt".
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float cat1, cat2, hip; 
	
	printf("Informe o valor do Cateto 1: ");
	scanf("%f", &cat1);
	
	printf("Informe o valor do Cateto 2: ");
	scanf("%f", &cat2);
	
	// Para elevar cada cateto ao quadrado, é necessário utilizar a expressão "pow". 
	// Para calcular a raíz quadrada de cada cateto, é necessário utilizar a expressão "sqrt".
	
	hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
	
	printf("O valor da Hipotenusa e: %.2f\n", hip);
	
	return 0;
}