#include <stdio.h>

void cubeByReference(int *nptr);
int cubeByValue(int n);

int main()
{
    int n=5,*nPtr=&n;
    cubeByValue(n);
    printf("After passing n to the cubeByValue the number is %d\n",n);
    cubeByReference(&n);
    printf("After passing n to the cubeByReference the number is %d",n);
}

int cubeByValue(int n)
{
    n=n*n*n;
    return n;
}

void cubeByReference(int *nptr)
{
    *nptr=*nptr * *nptr * *nptr;
}