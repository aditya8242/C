//program to check if three points fall in a straight line

#include <stdio.h>

int main()
{
	int x1, x2, x3, y1, y2, y3, m, n;
	
	printf("Enter x1, y1 ");
	scanf("%d %d",&x1, &y1);
	printf("Enter x2, y2 ");
	scanf("%d %d",&x2, &y2);
	printf("Enter x3, y3 ");
	scanf("%d %d",&x3, &y3);
	
	m = (y2 - y1) / (x2 - x1);
	n = (y3 - y2) / (x3 - x2);
	
	if(m == n)
	{
		printf("All three points are on one straight line\n");
	}
	else
	{
		printf("All three points are not on one straight line\n");
	}
}
