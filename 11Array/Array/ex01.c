// 길이가 5인 int형 배열을 선언해서 사용자로부터 5개의 정수를 입력
// 입력된 정수 중에서 최댓값, 최솟값, 총합 출력

#include <stdio.h>

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Array %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    printf("Max Number : %d\n", max);
    printf("Min Number : %d\n", min);

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum : %d\n", sum);
    
    return 0;
}