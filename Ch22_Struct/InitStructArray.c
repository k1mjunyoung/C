#include <stdio.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void)
{
    struct person arr[3] = {
        {"김하나", "011-1212-0001", 21},
        {"김둘", "011-1212-0002", 22},
        {"김셋", "011-1212-0002", 23},
    };

    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
    }

    return 0;
}