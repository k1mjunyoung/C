#include <stdio.h>

int main(void)
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int * parr;

    parr = &arr[2][2];

    printf("%d", *(parr+1));

    return 0;
}