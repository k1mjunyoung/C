// 10진수를 입력받아 2진수로 변환해서 출력하기

#include <stdio.h>

void DecToBin(int Dnum)
{
    int binary[16];
    int len = 0;

    for (int i = 0; Dnum > 0; i++)
    {
        binary[i] = Dnum % 2;
        Dnum = Dnum / 2;

        len ++;
    }

    printf("Your number[2] : ");
    for (int j = len - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");
}

int main(void)
{
    int num;

    printf("Enter a number[10] : ");
    scanf("%d", &num);

    DecToBin(num);

    return 0;
}