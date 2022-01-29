//10개의 소수 출력하기

#include <stdio.h>

void getPrimeNumber(int num){

    for (int i = 2; i < num; i++)
    {
        if ((num % i) != 0)
        {
            printf("%d, ", num);
        }
    }
}

int main(void){
    int num;

    printf("Prime Number is ");

    for (int num = 1; num <= 10; num++)
    {
        getPrimeNumber(num);
    }
    return 0;
}