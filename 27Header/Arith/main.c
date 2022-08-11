#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main(void)
{
    printf("Triangle Area(4, 2): %g\n", TriangleArea(4, 2));
    printf("Circle Area(rad = 3): %g\n", CircleArea(3));

    printf("Rectangle Round(2.5, 5.2): %g\n", RectangleRound(2.5, 5.2));
    printf("Square Roung(3): %f\n", SquareRound(3));

    return 0;
}