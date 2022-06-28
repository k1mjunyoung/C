#include <stdio.h>

int main(void)
{
    printf("성적관리 프로그램\n");

    int scoreTable[5][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d번 학생의 %d번째 과목 점수: ", i+1, j+1);
            scanf("%d", &scoreTable[i][j]);
        }
    }


    for (int i = 0; i < 4; i++)
    {
        int addStudent = 0;

        for (int j = 0; j < 4; j++)
        {
            addStudent += scoreTable[i][j];
        }

        scoreTable[i][4] = addStudent;
    }

    for (int i = 0; i < 4; i++)
    {
        int addScore = 0;

        for (int j = 0; j < 4; j++)
        {
            addScore += scoreTable[j][i];
        }

        scoreTable[4][i] = addScore;
    }

    int addResult = 0;

    for (int i = 0; i < 4; i++)
    {
        addResult += scoreTable[i][4];
    }

    scoreTable[4][4] = addResult;

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