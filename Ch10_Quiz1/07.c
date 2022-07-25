// 숫자 n을 입력받아 2^k <= n 을 만족하는 k값 출력
// 1. n을 2으로 나누기 반복
// 2. 나머지가 2보다 작아지면 2로 나눈 횟수(k) main 함수로 전달.

#include <stdio.h>

int getK(n)
{
    int k;

    for (k = 1; n / 2 >= 2; k++)
    {
        n /= 2;
    }
    return k;
}

int main(void)
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    printf("%d\n", getK(n));

    return 0;
}