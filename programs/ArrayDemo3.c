#include<stdio.h>

int main()
{
	int arr[4] = {10, 20, 30, 40};
	
	printf("arr: %lu\n", arr); // 100
	printf("&arr: %lu\n", &arr); // 100
	printf("&(arr[0]): %lu\n", &(arr[0])); // 100
	return 0;
}
