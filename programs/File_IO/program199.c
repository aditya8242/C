#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char FileName[20];

	printf("Enter the name of file you want to create: ");
	scanf("%s", FileName);

	fd = creat(FileName, 0777);

	if(fd == -1)
	{
		printf("Unable to create the file!\n");
	}
	else
	{
		printf("File successfully created with fd: %d!\n", fd);
	}

	return 0;
}