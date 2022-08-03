#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct
{
    Point lt;
    Point rb;
} Rectangle;

Point GetPoint(int num)
{
    Point pnt;

    printf("점%d의 x좌표: ", num);
    scanf("%d", &pnt.xpos);
    printf("점%d의 y좌표: ", num);
    scanf("%d", &pnt.ypos);

    return pnt;
}

int GetArea(Rectangle square)
{
    int area = (square.rb.xpos - square.lt.xpos)
                * (square.lt.ypos - square.rb.ypos);
    return area;
}

void ShowPoint(Rectangle square)
{
    printf("좌상단 좌표: [%d, %d]\n", square.lt.xpos, square.lt.ypos);
    printf("우상단 좌표: [%d, %d]\n", square.rb.xpos, square.lt.ypos);
    printf("우하단 좌표: [%d, %d]\n", square.rb.xpos, square.rb.ypos);
    printf("좌하단 좌표: [%d, %d]\n", square.lt.xpos, square.rb.ypos);
}


int main(void)
{
    Point pnt[2];

    for (int i = 0; i < 2; i++)
    {
        pnt[i] = GetPoint(i+1);
    }

    Rectangle square = {pnt[0], pnt[1]};

    printf("사각형의 넓이: %d\n", GetArea(square));
    ShowPoint(square);
    
    return 0;
}