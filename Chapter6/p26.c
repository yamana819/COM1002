#include <stdio.h>
#define SIZE 12

int main()
{
    int arr[SIZE]={1,14,64,23,45,57,89,23,23,567,42,1};
    int total=0;
    for (size_t i=0;i<SIZE;i++)
    {
        total+=arr[i];
    }
    printf("Total:%d",total);
}