// 10진수를 입력받아 2진수로 변환해서 출력하기

#include <stdio.h>

void DemToBin(int num)
{
    int binaryArr[100] = {0};
    int temp = num;

    for (int i = 0; (num / 2) > 0; i++)
    {
        binaryArr[i] = num % 2;
        num = num / 2;

        if (num < 2)
            break;
    }

    int binaryLen = sizeof(binaryArr[100]) / sizeof(int);

    printf("Binary length is %d\n", binaryLen);

    printf("Your number[2] : ");

    for (int i = 0; i < num; i++)
    {
        printf("%d", binaryArr[i]);
    }

    printf("\n");
}

int main(void)
{
    int num;

    printf("Enter a number[10] : ");
    scanf("%d", &num);

    DemToBin(num);

    return 0;
}