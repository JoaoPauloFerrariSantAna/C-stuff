#include <stdio.h>
#include <stdbool.h>

/* with the introduction done, let's try to make something basic */

int main() {
    /* let's try to create something */
    /* let's make a few pointers for certain types and alter their values, yes? */
    int op = 0;
    int number = 0;
    int *pnumber;

    float floater = 1.0f;
    float *pfloat;

    double dnumber = 2.0;
    double *pdnumber;

    char character = 'a';
    char *pcharacter;

    /* now let's reference the values */
    pnumber = &number;
    pfloat = &floater;
    pdnumber = &dnumber;
    pcharacter = &character;

    do {
        puts("1. Write a number.");
        puts("2. Write a float.");
        puts("3. Write a double");
        puts("4. Write a char");
        puts("0. Exit");

        printf(">>> ");
        scanf("%d", &op);

        switch(op) {
            case 0:
            break;
            case 1:
                printf("(int) >>> ");
                scanf("%d", &number); /* since pnumber is a pointer, pnumber will update it's values */
            break;
            case 2:
                printf("(float) >>> ");
                scanf("%f", &floater);
            break;
            case 3:
                printf("(double) >>> ");
                scanf("%lf", &dnumber);
            break;
            case 4:
                printf("(character) >>> ");
                scanf(" %c", &character);
            break;

            default:
                puts("Unknow option.");
            break;
        }
    } while(op != 0);

    printf("number = %d\n", (*pnumber));
    printf("floater = %f\n", (*pfloat));
    printf("dnumber = %lf\n", (*pdnumber));
    printf("character = %c\n", (*pcharacter));

    return 0;
}