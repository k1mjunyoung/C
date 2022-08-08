#include <stdio.h>

int ConvCase(int ch)
{
    int differ = 'a'-'A';
    
    if (ch >= 'A' && ch<= 'Z')
    {
        return ch + differ;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        return ch - differ;
    }
    else
        return -1;
}

int main(void)
{
    int input;
    printf("문자 입력: ");
    input = getchar();
    input = ConvCase(input);

    if (input == -1)
    {
        puts("범위를 벗어난 입력값입니다.");
        return -1;
    }

    putchar(input);
    return 0;
}