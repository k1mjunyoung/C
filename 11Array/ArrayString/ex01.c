// 영단어를 입력받아 길이를 계산하여 출력하기

#include <stdio.h>

int main(void)
{
    char word[100];
    int idx = 0;
    int length = 0; // 필요없음

    printf("Enter a word : ");
    scanf("%s", word);

    while (word[idx] != '\0')
    {
        length ++; // 필요없음
        idx ++;
    }
    
    printf("Word length : %d\n", length); // length 대신 idx 사용해도 무관

    return 0;
}