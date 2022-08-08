#include <stdio.h>
#include <stdlib.h>

int cntStrike(int *cpt, int *user)
{
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (cpt[i] == user[i])
            cnt++;
    }
    return cnt;
}

int cntBall(int *cpt, int *user)
{
    int cnt = 0;

    if (cpt[0] == user[1])
        cnt++;
    if (cpt[0] == user[2])
        cnt++;
    if (cpt[1] == user[0])
        cnt++;
    if (cpt[1] == user[2])
        cnt++;
    if (cpt[2] == user[0])
        cnt++;
    if (cpt[2] == user[1])
        cnt++;
    
    return cnt;
}

int main(void)
{
    int cNum[3];
    int uNum[3];
    int temp = 0;
    int cnt = 1;

    for (int i = 0; i < 3; i++)
    {
        cNum[i] = rand() % 10;
    }

    printf("cNum = %d %d %d\n", cNum[0], cNum[1], cNum[2]);

    printf("Star Game!\n");
    while (temp < 1)
    {
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &uNum[0], &uNum[1], &uNum[2]);
        
        printf("%d번째 도전 결과: %dstrike, %dball.\n", cnt, cntStrike(cNum, uNum), cntBall(cNum, uNum));

        if (cntStrike(cNum, uNum) == 3)
            temp++;
        
        cnt++;
    }
    
    return 0;
}