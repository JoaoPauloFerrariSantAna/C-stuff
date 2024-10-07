#include <stdio.h>

/* let's make a pointer have access to a variable's content */

void alter_data(int num) {
    static int *pnumber;

    pnumber = &num;

    printf("pnumber = %d\n", (*pnumber));
    
    (*pnumber) *= 2;
    
    printf("pnumber = %d\n", (*pnumber));
}

int main() {
    int number = 413;

    /* let's read numero's value */
    /* how do we make that? creating a pointer and referencing numero's value (413) */
    // int *pnumber;

    /* here we are accessing number's addr in memory */
    // pnumber = &number;

    alter_data(number);

    printf("%d\n", number);

    number *= 2;

    alter_data(number);

    /* if we change now the number's value, we'll change pnumber's too */
    /* number *= 2; */

    /* and vice-versa */
    /* (*pnumber) *= 2; */

    /* printf("%d\n", (*pnumber)); */
    /* printf("%d\n", number); */

    return 0;
}