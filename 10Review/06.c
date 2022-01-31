// 초를 입력받아 시, 분, 초 형식으로 출력하기
// 1시간 = 60분 = 3600초

#include <stdio.h>

int main(void)
{
    int time;
    int hour;
    int min;
    int sec;

    printf("Enter sec time : ");
    scanf("%d", &time);

    hour = time / 3600;
    min = time / 60 - 60;
    if (min > 60)
    {
        min -= 60;
    }
    sec = time % 60;

    printf("Result h:%d m:%d s:%d", hour, min, sec);

    return 0;
}