#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int tmp = 5;
    int *arr = (int*)malloc(sizeof(int)*tmp);

    for (int i = 0; i < tmp; i++)
    {
        printf("Input number: ");
        scanf("%d", &num);

        if (num == -1)
            break;
        else
        {
            if (i == tmp-1)
            {
                tmp += 3;
                arr = (int*)realloc(arr, sizeof(int)*tmp);
            }
            arr[i] = num;
        }
    }

    printf("Saved numbers: ");
    for (int j = 0; j < tmp; j++)
    {
        printf("%d ", arr[j]);
    }
    
    free(arr);
    return 0;
}