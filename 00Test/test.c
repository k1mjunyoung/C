#include <stdio.h>

int main(void)
{
    int num = 1;
    int * pnum;

    pnum = &num;

    printf("%d\n", sizeof(*pnum));

    return 0;   
}