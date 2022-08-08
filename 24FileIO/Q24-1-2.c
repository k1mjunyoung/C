#include <stdio.h>

int main(void)
{
    FILE * fp = fopen("Q24-1.txt", "at");
    fputs("#나이: 25\n", fp);
    fputs("#전화번호: 010-0000-0000\n", fp);

    fclose(fp);

    return 0;
}