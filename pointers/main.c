#include <stdio.h>

/* num1 e num2 são números aqui */
void swap(int num1, int num2) {
	int tmp = num2;
	
	num2 = num1;
	num1 = tmp;
}

/* swap_ref interage diretamente com o local de memória de */
/* "num1" e "num2" */
/* aqui, num1 e num2 são endereços de memória */
void swap_ref(int *num1, int *num2) {
	int tmp = *num2;

	*num2 = *num1;
	*num1 = tmp;
}

int main() {
	int num1 = 2;
	int num2 = 5;

	printf("num1 antes de swap: %d\n", num1);
	printf("num2 antes de swap: %d\n", num2);

	swap(num1, num2);

	printf("num1 depois de swap: %d\n", num1);
	printf("num2 depois de swap: %d\n", num2);

	printf("num1 antes de swap_ref: %d\n", num1);
	printf("num2 antes de swap_ref: %d\n", num2);

	/* aqui não mandamos os **valores** */
	/* mas sim os endereços de memória de num1 e num2 */
	swap_ref(&num1, &num2);

	return 0;
}
