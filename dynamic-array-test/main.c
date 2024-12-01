#include <stdio.h>
#include <stdlib.h>

#define ARRAY_EMPTY 0

#define ARRAY_MAX_SIZE 3
#define ARRAY_NEW_SPACE 2

typedef struct {
    int length;
    int top;
    int* items;
} Array;

Array* array_create() {
    Array* array = malloc(sizeof(Array));

    array->length = ARRAY_MAX_SIZE;
    array->items = malloc(sizeof(int) * ARRAY_MAX_SIZE); 
    array->top = ARRAY_EMPTY;

    return array;
}

void push(Array* arr, int value) {
    if(arr->top == arr->length) {
		printf("doubling.\n");
		arr->length *= ARRAY_NEW_SPACE;
    }

	arr->items[arr->top] = value;
	arr->top++;
}

int main() {
    Array *array = array_create();

    push(array, 1);
    push(array, 1);

	free(array);
    array = NULL;

    return 0;
}
