#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    (*ptr)+=2; printf("%d ", *(ptr));
    (*(ptr+1))+=2; printf("%d ", *(ptr+1));
    (*(ptr+2))+=2; printf("%d ", *(ptr+2));
    (*(ptr+3))+=2; printf("%d ", *(ptr+3));
    (*(ptr+4))+=2; printf("%d ", *(ptr+4));

    return 0;
}