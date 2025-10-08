#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of elements ");
    scanf("%d", &length);

    // step 1: allocate the memory
    Arr = (int *)malloc(length*sizeof(int));

    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets allocated successfully\n");
    }

    // step 2: use the memory

    // step 3: free the memory
    free(Arr);
    return 0;
}