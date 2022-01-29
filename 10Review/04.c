//5000원으로 잔돈을 남기지 않고 크림빵, 새우깡, 콜라 1개 이상 구매하기

#include <stdio.h>

void calculator(int a, int b, int c){
    for (int a = 1; a <= 7; a++){
        for (int b = 1; b < 5; b++){
            for (int c = 1; c < 8; c++)
            {
                if ((500 * a) + (700 * b) + (400 * c) == 3500)
                {
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", a, b, c);
                }
            }
        }
    }
}

int main(void){
    printf("Your Money : %d\n", 3500);

    int a = 0;
    int b = 0;
    int c = 0;

    calculator(a, b, c);

    return 0;
}