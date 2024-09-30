#include <stdio.h>

int main() {
	int fator = 4;
	int fatorial = 1;

	// código traduzido de um exercicio de python
	// do semestre passado
	for(int i = fator; i > 0; i--) {
		fatorial *= i;
	}

	printf("%d\n", fatorial);

	return 0;
}
