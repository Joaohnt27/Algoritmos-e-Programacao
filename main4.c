#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1, nota2, media;
	
	printf("Insira a Nota 1:");
	scanf("%f", &nota1);
	
	printf("Insira a Nota 2:");
	scanf("%f", &nota2);
	
	media = (nota1*2 + nota2*3) / 2;
	
	printf("\n A media e:%f\n", media);
	
	return 0;
}