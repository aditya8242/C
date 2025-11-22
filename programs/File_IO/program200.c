#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char FileName[20];

	printf("Enter the name of file you want to open: ");
	scanf("%s", FileName);

	fd = open(FileName, O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file!\n");
	}
	else
	{
		printf("File successfully opened with fd: %d\n", fd);
	}

	return 0;
}