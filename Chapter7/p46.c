#include <stdio.h>
#define SIZE 10

size_t getSize(float *ptr );

int main()
{
    float arr[SIZE];
    printf("The number of bytes in array %u the number of bytes returned by getSize is %u.",sizeof(arr),getSize(arr));
}


size_t getSize(float *ptr)
{
    return sizeof(*ptr);
}