#include <stdio.h>

void double_it_norm(int number) {
	/* aqui seria tipo: altere o **valor e se esqueça** */
	number *= 2;

	printf("Dentro da função: %d\n", number);
}

void double_it_ref(int *number) {
	/* aqui seria tipo: altere o **valor e mantenha ele** */
	(*number) *= 2;

	printf("Dentro da função: %d\n", (*number));
}

int main() {
	int num1 = 2;
	int num2 = 2;

	printf("num1 (sem ponteiro, antes de dobrar): %d\n", num1);
	double_it_norm(num1);
	printf("num1 (sem ponteiro, depois de dobrar): %d\n", num1);
	printf("num2 (com ponteiro, antes de dobrar): %d\n", num2);
	double_it_ref(&num2);
	printf("num2 (com ponteiro, depois de dobrar): %d\n", num2);

	return 0;
}
