#include <stdio.h>

/* so, strings are just arrays */
/* and we need the string length, right? */
/* so: how do we get the length of a ****stack**** array */
/* oh! this is couting spaces too */

#define get_length(string) sizeof(string) / sizeof(string[0])

int main() {
	/* 15 chars, plus one NULL terminator */
	char char_string[] = "apeshit bananas"; 

	printf("%ld\n", get_length(char_string));

	return 0;
}
