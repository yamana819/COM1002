#include <stdio.h>

int main()
{
    int arr[5];
    for (size_t i=0;i<5;i++)
    {
        arr[i]=31;
    }
    for (size_t i=0;i<5;i++)
    {
        printf("%d:%d\n",i,arr[i]);
    }
}