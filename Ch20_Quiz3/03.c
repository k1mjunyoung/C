
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tmp = 0;
    int rnum;

    printf("난수의 범위: 0 ~ %d\n", RAND_MAX);

    for (int i = 0; i < 5; i++)
    {
        printf("난수 출력: %d\n", (rand()%100)+1);
    }

    return 0;
}