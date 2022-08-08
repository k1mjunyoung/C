//10진수 >> 16진수 변환프로그램
#include <stdio.h>

int main(void){
    int num;

    printf("Enter a Decimal Number : ");
    scanf("%d", &num);

    printf("Hexadecimal Number : 0x%x", num);

    return 0;
}