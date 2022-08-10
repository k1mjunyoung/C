#include <stdio.h>
#define PI  3.14
#define AREA(rad)   PI*rad*rad

int main(void)
{
    int r;
    printf("Input rad: ");
    scanf("%d", &r);

    printf("Area: %g", AREA(r));
    return 0;
}