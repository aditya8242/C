#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd = 0, iRet = 0;
	char FileName[20];
	char Data[] = "India is my country";

	printf("Enter the name of the file: ");
	scanf("%s", FileName);

	fd = open(FileName, O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file!\n");
		return -1;
	}

	iRet = write(fd, Data, 11);

	printf("%d bytes gets successfully written.\n", iRet);

	close(fd);

	return 0;
}