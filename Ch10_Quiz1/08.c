// 2의 n승을 구하는 함수를 구현하기

#include <stdio.h>

int func(num)
{
    int constant =  2;

    for (int times = 2; times <= num; times++)
    {
        constant *= 2;
    }
    
    return constant;
}

int main(void)
{
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    printf("2의 %d승은 %d", num, func(num));

    return 0;
}