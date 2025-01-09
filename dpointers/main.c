#include <stdio.h>

int main() {
	int number = 413;
	int *pnumber = &number;
	int **ppnumber = &pnumber;

	(*pnumber) = 7;
	(*(*ppnumber)) = 82;

	printf("pnumber = %d\n", (*pnumber));
	printf("ppnumber = %d\n", (*(*ppnumber)));
	printf("number = %d\n", number);

	return 0;
}
