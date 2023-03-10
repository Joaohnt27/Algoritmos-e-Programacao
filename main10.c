#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario_minimo, salario_funcionario, quantidade_salario;
	
	printf("Informe o valor atual do salario minimo: ");
	scanf("%f", &salario_minimo);
	
	printf("Informe o valor do salario do funcionario: ");
	scanf("%f", &salario_funcionario);
	
	quantidade_salario = salario_funcionario / salario_minimo;
	
	printf("O funcionario recebe %.2f salarios minimos.\n", quantidade_salario);
	
	return 0;
}