//두 개의 정수를 입력받아서 구구단 출력
#include <stdio.h>

int num1;
int num2;

void multiply(int mNum){
    printf("%d단\n", mNum);
    for (int j = 1; j < 10; j++)
    {
        printf("%d * %d = %d\n", mNum, j, mNum*j);
    }
}

int main(void){

    printf("Enter Two Numbers you want!\n");
    printf("Number 1 : ");
    scanf("%d", &num1);
    printf("Number 2 : ");
    scanf("%d", &num2);

    if(num1 > num2){
        for (int i = num1; i >= num2; i--)
        {
            multiply(i);
        }
    }
    else{
        for (int i = num2; i >= num1; i--)
        {
            multiply(i);
        }
    }
    
    return 0;
}