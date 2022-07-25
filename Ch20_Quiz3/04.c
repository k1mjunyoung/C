#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int seed, i;
    seed = (int)time(NULL);
    srand(seed);

    for (int i = 0; i < 2; i++)
    {
        printf("주사위%d: %d\n", i, (rand()%6+1));
    }

    return 0;
}