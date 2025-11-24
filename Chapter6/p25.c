#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    for (size_t i=0;i<SIZE;i++)
    {
        arr[i]=2+i*2;
    }
    for (size_t i=0;i<SIZE;i++)
    {
        printf("%d:%d\n",i,arr[i]);
    }
}