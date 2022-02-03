#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *front = &arr[0], *back = &arr[5];
    int i, temp;
    
    for (i = 0; i < 3; i++)
    {
        temp = *front;
        *front = *back;
        *back = temp;
        front += 1;
        back -= 1;
    }
    
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}