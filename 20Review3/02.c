#include <stdio.h>

int main(void)
{
    int n;

    printf("[N x N 달팽이배열]\n");
    printf("정수 N 입력 : ");
    scanf("%d", &n);

    int arr[n][n];
    
    int * ptr;
    int temp;

    ptr = &arr[0][0];

    for (int t1 = 0; t1 < n; t1++)
    {
        *(ptr + t1) = t1 + 1;
        ptr ++;
        temp = t1;
    }
    
    ptr += 3;

    for (int t2 = 0; t2 < n-1; t2++)
    {
        *(ptr + (4*t2)) = temp + t2 + 1;
        ptr += 4;
        temp = t2;
    }

    ptr = &arr[n][n-1];

    for (int t3 = 0; t3 < n-1; t3++)
    {
        *(ptr - t3) = temp + t3 + 1;
        ptr --;
    }
    
    ptr = &arr[n-1][0];

    for (int t4 = 0; t4 < n-2; t4++)
    {
        *(ptr - (4*t4)) = temp + t4 + 1;
    }

    ptr ++;

    for (int t5 = 0; t5 < n-2; t5++)
    {
        *(ptr + t5) = temp + t5 + 1;
        
    }
    
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

/** 4 x 4 배열이 채워지는 순서
 * 0,0
 * 0,1
 * 0,2
 * 0,3
 * 1,3
 * 2,3
 * 3,3
 * 3,2
 * 3,1
 * 3,0
 * 2,0
 * 1,0
 * 1,1
 * 1,2
 * 2,2
 * 2,1
 * 
**/