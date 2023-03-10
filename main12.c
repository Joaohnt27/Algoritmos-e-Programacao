#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, conta1, conta2, total_contas, multa, salario_restante;
	
	printf("Informe o salario de Joao: ");
	scanf("%f", &salario);
	
	printf("Informe o valor da primeira conta atrasada: ");
	scanf("%f", &conta1);
	
	printf("Informe o valor da segunda conta atrasada: ");
	scanf("%f", &conta2);
	
	total_contas = conta1 + conta2;
	multa = total_contas * 0.02;
	salario_restante = salario - total_contas - multa;
	
	
	printf("Apos realizar o pagamento das contas, restara R$ %.2f\n do salario de Joao.", salario_restante);
	
	return 0;
}