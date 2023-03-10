#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float ano_nascimento, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;
	
	printf("Informe o ano de nascimento: ");
	scanf("%f", &ano_nascimento);
	
	printf("Informe o ano atual: ");
	scanf("%f", &ano_atual);
	
	idade_anos = ano_atual - ano_nascimento;
	idade_meses = idade_anos * 12;
	idade_dias = idade_anos * 365;
	idade_semanas = idade_dias / 7;
	
	printf("A idade da pessoa e: %.1f anos.\n", idade_anos);
	printf("A idade da pessoa em meses e: %.1f meses.\n", idade_meses);
	printf("A idade da pessoa em dias e: %.1f dias.\n", idade_dias);
	printf("A idade da pessoa em semanas e: %.1f semanas.\n", idade_semanas);
	
	return 0;
}