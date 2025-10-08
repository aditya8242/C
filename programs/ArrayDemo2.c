#include<stdio.h>

int main()
{
	int arr[4] = {10, 20, 30, 40};
	int brr[3];
	
	brr[2] = 30;
	brr[0] = 10;
	brr[1] = 20;
	
	printf("%d\n", arr[0]); // 10
	printf("%d\n", arr[1]); // 20
	
	printf("%d\n", brr[0]); // 10
	printf("%d\n", brr[1]); // 20
	return 0;
}
