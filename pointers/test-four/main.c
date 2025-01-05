#include <stdio.h>

#define ARRAY_LENGTH 5

int main() {
	int i;
	int arr[ARRAY_LENGTH];
	int * arrp;

	/* Will gen a easy to access arr */
	for(i = 0; i < ARRAY_LENGTH; i++) {
		arr[i] = i * 2;
	}

	/* Arrp has the mem addr of whatever is inside arr[3] */
	arrp = &arr[3];
	/* Will override arr[3] to 413 */
	(*arrp) = 413;

	for(i = 0; i < ARRAY_LENGTH; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
