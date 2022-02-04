#include <stdio.h>

void SqaureByValue(int num)
{
    int result = num * num;

    printf("Result by Value : %d\n", result);
}

void SquareByReference(int *ptr)
{
    *ptr = *ptr * *ptr;
}

int main(void)
{
    int num;
    printf("num : ");
    scanf("%d", &num);

    SqaureByValue(num);

    SquareByReference(&num);
    printf("Result by Reference : %d\n", num);

    return 0;
}