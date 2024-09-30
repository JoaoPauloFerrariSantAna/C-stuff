#include <stdio.h>

int main() {
	// https://www.debit.com.br/tabelas/tabelas-irrffloat salario_mensal = 0.0f;
	float contribui_inss = 0.0f;

	printf("Quanto você ganha mensalmente? ");
	scanf("%f", &salario_mensal);

	printf("Quanto você contribuiu ao INSS? ");
	scanf("%f", &contribui_inss);

	// preciso definir a alíquota
	// para isso eu preciso olhar no salario mensal e defini-la
	float aliquota = 0.0f;
	if(salario_mensal >= 1903.99f && salario_mensal <= 2826.65) {
		aliquota = 7.5f;
	}

	if(salario_mensal >= 2826.66f && salario_mensal <= 3751.05f) {
		aliquota = 15.0f;
	}

	if(salario_mensal >= 3751.06f && salario_mensal <= 4664.68f) {
		aliquota = 22.5f;
	}

	if(salario_mensal >= 4664.68f) {
		aliquota = 27.5f;
	}

	float salario_sem_inss = salario_mensal - contribui_inss;
	float imposto_renda = salario_sem_inss * (aliquota / 100.0f);

	printf("%f\n", imposto_renda);

	return 0;
}
