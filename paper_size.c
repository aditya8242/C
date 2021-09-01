//Program for generating paper size from A0 upto A8

/*Paper   of   size   A0   has   dimensions   1189   mm   x   841   mm. Each subsequent  size  A(n)  is  defined  as  A(n-1)  cut  in  half  parallel  to  its shorter  sides. Thus  paper  of  size  A1  would  have  dimensions  841 mm x  594mm. Write  a  program  to  calculate  and  print  paper  sizes A0, A1, A2, ... A8*/

#include <stdio.h>

int main()
{
	int height = 1189, width = 841,temp;
	
	for(int i = 0; i <= 8; i++)
	{
		printf("A%d: %d mm x %d mm\n",i,height,width);
		
		temp = height;
		height = width;
		width = temp/2;
	}
}
