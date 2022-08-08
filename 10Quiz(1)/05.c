// 10개의 소수 출력하기
// HINT
// 숫자 n을 2부터 n-1까지 나누었을 때 나머지가 0이 아니면 소수


#include <stdio.h>

int getPrimeNumber(int num)
{
    if (num == 2)
    {
        return 0;
    }
    else
    {
        int checker = 0;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                checker = 1;
                break;
            }
            else
                continue;
        }
        if (checker == 0)
            return 0;
        else
            return 1;
    }
}

int main(void){
    printf("Prime Number is ");

    int num;
    int cnt = 0;

    for (int num = 2; num < 100; num++)
    {
        if (getPrimeNumber(num) == 0)
        {
            cnt += 1;
            if (cnt <= 10)
            {
                printf("%d, ", num);
            }
            else
                break;
        }
    }
    return 0;
}

//"에라토스테네스의 체" 알고리즘으로도 시도해볼 것.