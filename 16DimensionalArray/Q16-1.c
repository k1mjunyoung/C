#include <stdio.h>

int main(void)
{
    int mulArr[3][9];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            mulArr[i][j] = (i+2) * (j+1);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", mulArr[i][j]);
        }

        printf("\n");
    }


    return 0;
}