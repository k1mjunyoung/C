#include <stdio.h>

int main(void)
{
    int num = 10;
    int *pnum;
    pnum = &num;
    int **dpnum;
    dpnum = &pnum;

    printf("%p\n", &num);
    printf("%p\n", pnum);
    printf("%p\n\n", dpnum);

    printf("%d\n", *pnum);
    printf("%d\n", **dpnum);


    return 0;
}