#include <stdio.h>

int main(void)
{
    printf("성적관리 프로그램\n");

    int scoreTable[5][5];

    // 학생마다 과목별로 점수입력
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d번 학생의 %d번째 과목 점수: ", i+1, j+1);
            scanf("%d", &scoreTable[i][j]);
        }
    }

    // 학생별 점수합계
    for (int i = 0; i < 4; i++)
    {
        int addStudent = 0;

        for (int j = 0; j < 4; j++)
        {
            addStudent += scoreTable[i][j];
        }

        scoreTable[i][4] = addStudent;
    }

    // 과목별 점수합계
    for (int i = 0; i < 4; i++)
    {
        int addScore = 0;

        for (int j = 0; j < 4; j++)
        {
            addScore += scoreTable[j][i];
        }

        scoreTable[4][i] = addScore;
    }

    // 점수의 총합 저장
    int addResult = 0;

    for (int i = 0; i < 4; i++)
    {
        addResult += scoreTable[i][4];
    }

    scoreTable[4][4] = addResult;

    // 배열 출력
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", scoreTable[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}