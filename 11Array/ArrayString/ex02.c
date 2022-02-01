// 영단어를 입력받아 역순으로 출력하기

#include <stdio.h>

int main(void)
{
    char word[100];
    int len;

    printf("Enter a word : ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        len = i;
    }

    for (int mark = 0; mark < len; mark++)
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