// 사용자로부터 영단어를 입력받아 아스키코드 값이 가장 큰 문자 출력

#include <stdio.h>

int main(void)
{
    char word[100];
    char max = word[0];

    printf("Enter a word : ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] > max)
        {
            max = word[i];
        }
    }
    
    printf("Biggest Ascii Code : %c\n", max);
    
    return 0;
}