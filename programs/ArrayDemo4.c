#include<stdio.h>

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};

	printf("size of arr: %lu\n", sizeof(arr)); // 20
	
	printf("arr: %lu\n", arr); // 100
	printf("&arr: %lu\n", &arr); // 100
	
	printf("arr+1: %lu\n", arr+1); // 104
	printf("(&arr)+1: %lu\n", (&arr)+1); // 120
	return 0;
}
