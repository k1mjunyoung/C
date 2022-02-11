// 10진수를 입력받아 2진수로 변환해서 출력하기

#include <stdio.h>

int main(void)
{
    int num;
    int binaryArr[100];

    printf("Enter a Number[10] : ");
    scanf("%d", &num);

    int temp = num;

    for (int i = 0; i < temp; i++)
    {
        binaryArr[i] = num % 2;
        num = num / 2;
    }
    
    int length = sizeof(binaryArr[100]) / sizeof(int); // 출력을 위한 배열 길이
    
    printf("Binary length : %d\n", length);

    printf("Your Number[2] : ");
    for (int i = length; i >= 0 ; i--)
    {
        printf("%d", binaryArr[i]);
    }
    
    printf("\n");

    return 0;
}