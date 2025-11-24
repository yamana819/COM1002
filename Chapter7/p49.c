#include <stdio.h>


int main()
{
    int arr[]={12,13,15,17,19};
    size_t size=sizeof(arr)/sizeof(arr[0]);
    int *aPtr=arr;
    puts("Array elements with array index notation (array[x]):");
    for (size_t i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    puts("");
    puts("Array elements with using array name as a pointer *(array+x):");
    for (size_t j=0;j<size;j++)
    {
        printf("%d ",*(arr+j));
    }
    puts("");
    puts("Array elements with pointer index notation (ptr[x]):");
    for (size_t x=0;x<size;x++)
    {
        printf("%d ",aPtr[x]);
    }
    puts("");
    puts("Array elements with pointer/offset notation *(ptr+x):");
    for (size_t y=0;y<size;y++)
    {
        printf("%d ",*(aPtr+y));
    }
}