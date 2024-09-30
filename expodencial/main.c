#include <stdio.h>

int main() {
	float numero = 0.0f;
	printf("Digite um número: ");
	scanf("%f", &numero);

	int expoente = 0;
	printf("Digite o expoente: ");
	scanf("%d", &expoente);

	// Já que precisamos manter o mesmo número
	// a gente tem que deixar um número aqui
	float resultado = 1.0f;

	for(int i = 0; i < expoente; i++) {
		// e multiplicar aqui
		// porque vai virar "num * 1 = num" dai vai virar "num * num = num2"
		// e "numN * num = numN2"
		resultado *= numero;
	}

	printf("%f\n", resultado);
	return 0;
}
