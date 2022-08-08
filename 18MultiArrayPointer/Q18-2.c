void SimpleFuncOne(int *parr1, int *parr2){
    ...
}
void SimpleFuncTwo(int (*parr3)[4], int (*parr4)[4]){
    ...
}

int main(void)
{
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][2];

    SimpleFuncOne();
    SimpleFuncTwo();

    return 0;
}