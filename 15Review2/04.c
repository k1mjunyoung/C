#include <stdio.h>
#include <string.h>

void Compare(char *ptr, int length)
{
    for (int i = 0; i < length/2; i++)
    {
        if (*(ptr+i) != *(ptr + length - 1 - i))
        {
            printf("The string is not palindrome!\n");
            return;
        }
        else
            continue;
    }
    printf("The string is palindrome!\n");
}

int main(void)
{
    char String[100];

    printf("Input string : ");
    scanf("%s", String);

    printf("String length : %lu\n", strlen(String));

    Compare(String, strlen(String));

    return 0;
}