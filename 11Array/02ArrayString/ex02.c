// 영단어를 입력받아 역순으로 출력하기

#include <stdio.h>

int main(void)
{
    char voca[100];
    int len = 0, i;
    char temp;

    printf("영단어 입력 : ");
    scanf("%s", voca);

    while(voca[len] != '\0')
        len ++;

    for (i = 0; i < len/2; i++)
    {
        temp = voca[i]; // 앞문자 임시 저장
        voca[i] = voca[(len-i)-1]; // 뒷문자를 앞으로
        voca[(len-i)-1] = temp; // 앞문자를 뒤로
    }

    printf("뒤집힌 영단어 : %s\n", voca);

    return 0;   
}

/** 오답
#include <stdio.h>

int main(void)
{
    char word[100];
    int len;

    printf("Enter a word : ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        len = i; // 단어 끝 지점 i를 len에 저장
    }

    for (int mark = 0; mark <= len; mark++)
    {
        word[mark] = word[len-mark];
        // if (len = 3)             
        // word[0] = word[3-0]
        // word[1] = word[3-1]
        // word[2] = word[3-2]                
        // word[3] = word[3-3]
    }
    
    printf("Reverse word : %s\n", word);

    return 0;
}

// 0 1 2 3  4 5 6 7 8 9 10 ...
// w o r d \0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ...
// d r o w \0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ...
//       j  i
**/