#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd = 0, iRet = 0;
	char FileName[20];
	char Data[50] = {'\0'}; // other defaults will be set by OS

	printf("Enter the name of the file: ");
	scanf("%s", FileName);

	fd = open(FileName, O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file!\n");
		return -1;
	}

	iRet = read(fd, Data, 7);

	printf("%d bytes gets successfully read.\n", iRet);

	printf("Data from file: %s\n", Data);

	close(fd);

	return 0;
}