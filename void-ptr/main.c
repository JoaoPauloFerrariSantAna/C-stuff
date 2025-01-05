#include <stdio.h>

int main() {
	/* in this case, void means no type */
	/* so this pointer does not have a type and is NULL */
	void *vptr = NULL;

	int number = 413;

	/* we're going to "follow" variable "num" */
	vptr = &number;

	number = 74;

	/* we will then "give a type", the type being "int*", to "vptr" */
	/* and then we will see, desreference, what the variable has */
	printf("%d\n", *((int*)vptr));

	return 0;
}
