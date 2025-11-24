#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE]={3,5,12,21,16};
    for (size_t i=0;i<SIZE;i++)
    {
        printf("%d:%d\t",i,arr[i]);
        for (size_t j=1;j<=arr[i];j++)
        {
            printf("%c",'*');
        }
        puts("");
    }
}