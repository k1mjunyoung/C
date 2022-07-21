#include <stdio.h>

int main(void)
{
    unsigned int N;

    printf("[N x N 달팽이배열]\n");
    printf("자연수 N 입력 : ");
    scanf("%d", &N);

    int arr[N][N];
    unsigned int num = 1; // 배열에 들어갈 숫자
    int row = 0, col = 0;
    int set; // 세트 수(세로, 가로)
    int cnt; // 반복 수(cnt만큼 칸 이동)
    int dir = 1; // +,- 방향을 전환하는데 사용하는 변수

    // 첫시작 독립시행
    for (col = 0; col < N; col++)
    {
        arr[row][col] = num;
        num++;
    }

    col--; // col=N이 되는 문제 해결

    for (set = N-1; set > 0; set--)
    {
        for (cnt = set; cnt > 0; cnt--)
        {
            row += dir;
            arr[row][col] = num;
            num++;
        }
        dir *= -1;
        for (cnt = set; cnt > 0; cnt--)
        {
            col += dir;
            arr[row][col] = num;
            num++;
        }   
    }

    // 완성된 배열 출력
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%4d", arr[i][j]);
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
 * ---
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
 * n,m
**/