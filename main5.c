#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float preco1, preco2;
	
	printf("Informe o preco do produto:");
	scanf("%f", &preco1);
	
	preco2 = (preco1 * 0.90);
	
	printf("\n O preco final e:%f\n", preco2);
}

// Também posso utilizar da seguinte forma:

//int main(int argc, char *argv[]) {
//	float preco1, des;
	
//	printf("Informe o preco do produto:");
//	scanf("%f", &preco1);
	
//	printf("Qual o valor do desconto?");
//	scanf("%f", &des);
	
//	printf("\n O preco final e:%f\n", preco1 - (preco1 * des/100));
	
//	return 0;
//}