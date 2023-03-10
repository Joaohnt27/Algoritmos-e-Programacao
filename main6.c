#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario_fixo, vendas, comissao, salario_final;
	
	printf("Informe o salario fixo do funcionario: ");
	scanf("%f", &salario_fixo);
	printf("Informe o valor total das vendas realizadas: ");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.04;
	salario_final = salario_fixo + comissao;
	
	printf("Comissao: R$ %.2f\n", comissao);
	printf("Salario Final: R$ %.2f\n", salario_final);
	
	return 0;
}