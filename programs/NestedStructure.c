#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo dobj; // nested
};

int main()
{
    printf("Size of hello structure is %d", sizeof(struct Hello));
    return 0;
}