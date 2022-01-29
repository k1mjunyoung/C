//두 개의 정수를 입력받아 최대공약수 구하기

#include <stdio.h>

int getGCD(int a, int b)
{
    int gcd;
    
    for (int i = 2; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    
    return gcd;
}

int main(void){
    int num1, num2;

    printf("Enter Two Numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("GDC is %d\n", getGCD(num1, num2));

    return 0;
}