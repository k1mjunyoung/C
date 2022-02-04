#include <stdio.h>

void swap(int *ptr1, int *ptr2, int *ptr3)
{
    int temp = *ptr1; // 변수 num1의 주소값(ptr1)에 저장돼있는 값을 변수 temp에 저장
    *ptr1 = *ptr2; // 변수 num2의 주소값(ptr2)에 저장돼있는 값을 변수 주소값(ptr1)이 가르키는 num1에 저장
    *ptr2 = *ptr3;
    *ptr3 = temp;
}

int main(void)
{
    int num1, num2, num3;
    printf("number 1 : ");
    scanf("%d", &num1);
    printf("number 2 : ");
    scanf("%d", &num2);
    printf("number 3 : ");
    scanf("%d", &num3);

    printf("%d %d %d\n", num1, num2, num3);

    swap(&num1, &num2, &num3); // numN의 주소값 전달

    printf("Mixing...\n");

    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}