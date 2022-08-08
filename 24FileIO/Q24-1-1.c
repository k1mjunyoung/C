#include <stdio.h>

int main(void)
{
    FILE * fp = fopen("Q24-1.txt", "wt");
    fputs("#이름: 윤성우\n", fp);
    fputs("#성별: 남\n", fp);
    
    fclose(fp);

    return 0;
}