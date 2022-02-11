// 길이가 10인 배ㄹ 선언, 10개의 정수를 입력받아 홀수/짝수를 구분지어 출력하기

#include <stdio.h>

void Even(int * num)
{
    printf("Even : ");

    for (int i = 0; i < 10; i++)
    {
        if ((*(num + i)) % 2 == 0)
        {
            printf("%d ", *(num + i));
        }    
    }
    printf("\n");
}

void Odd(int * num)
{
    printf("Odd : ");

    for (int i = 0; i < 10; i++)
    {
        if ((*(num + i)) % 2 != 0)
        {
            printf("%d ", *(num + i));
        }    
    }
    printf("\n");
}

int main(void)
{
    int arr[10];

    printf("Enter 10 Numbers\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    Even(&arr[0]);
    Odd(&arr[0]);

    return 0;
}