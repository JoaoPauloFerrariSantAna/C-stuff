#include <stdio.h>
#include <stdlib.h>

/* using realloc is better than doing this...  */
/* like everything in these two files */

#define DEFAULT_SIZE 5

#define ERROR_VALUE 0x10

#define OPERATION_ERROR 0x10
#define OPERATION_OK 0x11

#define EXPAND 0x1
#define SHRINK 0x2

#define START 0

typedef int* Elements;
typedef int Size;

/* pretty much impossible to keep track of size without the struct */
typedef struct Array {
	Size size;
	Elements elements;
} Array;

void show(int* array, int until) {
	for(int i = 0; i < until; i++) {
		printf("%d\n", array[i]);
	}
}

void fill(int* array, int start, int end) {
	for(int i = start; i < end; i++) {
		/* just filling the first array */
		array[i] = 2 * i;
	}
}

void copy_to(int* new_array, int* old_array, int until) {
	for(int i = 0; i < until; i++) {
		/* copying the data to "new_arr" from "old_arr" */
		new_array[i] = old_array[i];
	}
}

/* 
 * this function will return a size dictaded by the flag passed by "op"
 * or an error
*/
Size set_size(int op, int old_sz, int new_elements) {
	Size new_sz = 0;

	switch(op) {
		case SHRINK:
			/* decrease indexes */
			new_sz = old_sz - new_elements;
		break;

		case EXPAND:
			new_sz = old_sz + new_elements;
		break;

		default:
			printf("Unknow operation with ID: \"%d\"\n", op);
		break;
	}

	/* zero is valid, 'cause the 1th element is 0 */
	/* so we must check for less than zero */
	if(new_sz < 0) {
		return ERROR_VALUE; 
	}

	return new_sz;
}

Elements resize(Array *old_array, int new_elements, int operation) {
	int new_size = set_size(operation, old_array->size, new_elements);
	Elements new_array = NULL;

	/* if new_size is negative it's a error */
	/* since there is no negative index, */
	/* so we'll just return the same array */
	if(new_size == ERROR_VALUE) {
		new_array = old_array->elements;
		return new_array;
	}

	new_array = malloc(sizeof(int) * new_size);
	copy_to(new_array, old_array->elements, new_size);

	free(old_array->elements);
	old_array->size = new_size;

	return new_array;
}

int main() {
	Array array;

	array.elements = malloc(sizeof(Elements) * DEFAULT_SIZE);

	if(array.elements == NULL) {
		printf("Allocation failed.\n");
		return 1;
	}

	array.size = DEFAULT_SIZE;
	fill(array.elements, 0, array.size);
	
	/* &array 'cause it can have a thousand or more items, */
	/* it could get a little bit "salty" to pay the price later */
	array.elements = resize(&array, 3, SHRINK);

	show(array.elements, array.size);

	free(array.elements);
	array.elements = NULL;

	return 0;
}
