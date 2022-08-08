#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];
    int temp = 0;

    printf("%d\n", *ptr);

    for (int i = 4; i >= 0; i--)
    {
        temp += *(ptr-i);
    }
    
    printf("%d\n", temp);

    return 0;
}