#include <stdio.h>

int main(void)
{
	int arr1[3][4];
	int arr2[7][9];
	
	printf("Length 3, Width 4 : %d\n", sizeof(arr1));
	printf("Length 7, Width 9 : %d\n", sizeof(arr2));
	
	return 0;
}