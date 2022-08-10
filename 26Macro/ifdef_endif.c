#include <stdio.h>
// #define ADD 
#define MIN 

int main(void)
{
    int num1, num2;
    printf("Input 2 numbers: ");
    scanf("%d %d", &num1, &num2);

#ifdef ADD
    printf("%d + %d = %d\n", num1, num2, num1+num2);
#endif

#ifdef MIN
    printf("%d - %d = %d\n", num1, num2, num1-num2);
#endif

    return 0;
}