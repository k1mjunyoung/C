#include <stdio.h>
#define ADD(A, B, C)    A+B+C
#define MUL(A, B, C)    A*B*C

int main(void)
{
    int a, b, c;
    printf("Input 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Add Result: %d\n", ADD(a, b, c));
    printf("Mul Result: %d\n", MUL(a, b, c));

    return 0;
}