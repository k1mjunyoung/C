#include <stdio.h>
#define ADD 1
#define MIN 1

int main(void)
{
    int num1, num2;
    printf("Input 2 numbers: ");
    scanf("%d %d", &num1, &num2);

#if ADD
    printf("%d + %d = %d\n", num1, num2, num1+num2);
#endif

#if MIN
    printf("%d - %d = %d\n", num1, num2, num1-num2);
#endif

    return 0;
}