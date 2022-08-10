#include <stdio.h>
#define SQUARE(X) X*X

int main(void)
{
    int num = 20;

    //success
    printf("Square of num: %d\n", SQUARE(num));
    printf("Square of -5: %d\n", SQUARE(-5));
    printf("Square of 2.5: %g\n", SQUARE(2.5));

    //failure
    printf("Square of 3+2: %d\n", SQUARE(3+2));
    //solution
    printf("Square of 3+2: %d\n", SQUARE((3+2)));

    return 0;
}