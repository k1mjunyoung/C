#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point * ppos1, Point * ppos2)
{
    Point temp;
    temp = *ppos2;

    *ppos2 = *ppos1;
    *ppos1 = temp;
}

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    Point * ppos1 = &pos1;
    Point * ppos2 = &pos2;

    SwapPoint(ppos1, ppos2);

    printf("pos1: [%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("pos2: [%d, %d]\n", pos2.xpos, pos2.ypos);

    return 0;
}