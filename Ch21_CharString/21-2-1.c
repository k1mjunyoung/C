/** 적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램 을 작성해 보자.
    예를 들어서 프로그램 사용자로부터 입력 받은 문자열이 “A15#43" 이라하면，
    이문자열중아라비아숫자는 1， 5, 4, 3 이니， 1+5+4+3 의연산결과가출력되어야 한다.
**/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    int strSize;
    int sum = 0;

    printf("문자열 입력: ");
    scanf("%s", str);

    strSize = strlen(str);

    for (int i = 0; i < strSize; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            sum += str[i]-48;
        }
        else
            continue;
    }
    
    printf("총합: %d\n", sum);
    return 0;
}