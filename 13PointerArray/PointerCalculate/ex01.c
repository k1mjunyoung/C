#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    (*ptr)+=2; printf("%d ", *ptr); ptr++;
    (*ptr)+=2; printf("%d ", *ptr); ptr++;
    (*ptr)+=2; printf("%d ", *ptr); ptr++;
    (*ptr)+=2; printf("%d ", *ptr); ptr++;
    (*ptr)+=2; printf("%d ", *ptr); ptr++;

    return 0;
}