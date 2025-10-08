#include <stdio.h>

int main()
{
	int num, i = 1, digit, sum;  
  
    while(i <= 600)  
    {  
        num = i;  
        sum = 0;  
  
        while(num)  
        {  
            digit = num % 10;  
            sum = sum + (digit * digit * digit);  
            num = num / 10;  
        }  
  
        if(i == sum)  
        {  
            printf("%d is a Armstrong number\n", i);  
        }  
  
        i++;  
    }
}
