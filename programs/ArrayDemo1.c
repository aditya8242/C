#include<stdio.h>

int main()
{
	int arr[4] = {10, 20, 30, 40};
	
	int brr[] = {10, 20, 30, 40, 50};
	
	int crr[6] = {10, 20, 30};
	
	printf("Size of arr is %lu\n", sizeof(arr)); // 16
	printf("Size of brr is %lu\n", sizeof(brr)); // 20
	printf("Size of crr is %lu\n", sizeof(crr)); // 24
	
	return 0;
}
