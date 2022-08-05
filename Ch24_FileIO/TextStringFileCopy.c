#include <stdio.h>

int main(void)
{
    FILE * src = fopen("src.txt", "rt");
    FILE * des = fopen("des.txt", "wt");

    char str[20];
    
    if(src==NULL || des==NULL)
    {
        puts("Failure");
        return -1;
    }

    while(fgets(str, sizeof(str), src)!=NULL)
        fputs(str, des);

    if (feof(src)!=0)
        puts("Success");
    else
        puts("Failure");

    fclose(src);
    fclose(des);
    return 0;
}