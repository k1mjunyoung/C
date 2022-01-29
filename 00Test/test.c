//두 개의 정수를 입력받아서 구구단 출력
#include <stdio.h>

int main(void){
    int num = 9;

    for (int j = 1; j < 10; j++)
    {
        printf("%d * %d = %d\n", num, j, num*j);
    }
}