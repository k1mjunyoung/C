/** Bubble sort algorithm

#include <stdio.h>
void BubbleSort(int ary[], int len);

int main(void)
{
    int arr[4] = {3, 2, 4, 1};
    int i;

    BubbleSort(arr, sizeof(arr)/sizeof(int));

    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
    return 0;
}

void BubbleSort(int ary[], int len)
{
    int i, j;
    int temp;

    for (i = 0; i < len-1; i++)
    {
        for (j = 0; j < (len-i)-1; j++)
        {
            if (ary[j] > ary[j+1])
            {
                temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }
}
**/

#include <stdio.h>

void DesSort(int array[7], int length)
{
    int i, j;
    int temp;

    for (i = 0; i < length-1; i++)
    {
        for (j = 0; j < (length-1)-i; j++)
        {
            if (array[j] < array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(void)
{
    int array[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Save number %d : ", i);
        scanf("%d", &array[i]);
    }

    DesSort(array, sizeof(array)/sizeof(int));

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}