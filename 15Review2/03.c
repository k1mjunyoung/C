#include <stdio.h>

int main(void)
{
    int Array[10];
    int num;
    int front = 0, back = 9;

    for (int i = 0; i < 10; i++)
    {
        printf("Input %d : ", i + 1);
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            Array[front] = num;
            front ++;
        }
        else
        {
            Array[back] = num;
            back --;
        }
    }

    printf("Output : ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", Array[j]);
    }
    
    printf("\n");

    return 0;
}