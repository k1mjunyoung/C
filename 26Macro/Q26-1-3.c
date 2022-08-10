#include <stdio.h>
#define MAX(X, Y)   ((X)>(Y) ? (X) : (Y))

int main(void)
{
    int a, b;
    printf("Input 2 numbers:");
    scanf("%d %d", &a, &b);

    printf("The bigger number is %d\n", MAX(a,b));
    return 0;
}