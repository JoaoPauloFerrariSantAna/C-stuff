#include <stdio.h>
#include <stdlib.h>

/* now let's try to use pointers with arrays... */

int main() {
    int arr[5];
    int * pointer;

    for(int i = 0; i < 5; i++) {
        printf(">>> ");
        scanf("%d", &arr[i]);

        /* here, "pointer" will have the reference of the current position of "arr" */
        pointer = &arr[i];
        
        /* so, with that, we can multply arr's current value by two */
        /* here and arr's value will be also multiplied */
        (*pointer) *= 2;
    }

    for(int i = 0; i < 5; i++) {
        /* proof */
        printf("%d ", arr[i]);
    }
    return 0;
}