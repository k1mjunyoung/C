// 아래에서 보이는 main 함수에서 물음표 ???을 대신할 수 있는 포인터 변수를 선언해보자. 
int main(void)
{
    int * arrl[5]; 
    int * arr2[3][5];
    
    int **ptr1 = arrl;
    int *(*ptr2)[5] = arr2;

    return 0;
}