#include <stdio.h>

void reverseArr(int *aPtr,int *bPtr);

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for (size_t i=0;i<size;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    for (size_t j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
    puts("");
    reverseArr(&arr[0],&arr[size-1]);
    for (size_t a=0;a<size;a++)
    {
        printf("%d ",arr[a]);
    }
}

void reverseArr(int *aPtr,int *bPtr)
{
    for (;bPtr>=aPtr;bPtr--,aPtr++)
    {
        int temp=*aPtr;
        *aPtr=*bPtr;
        *bPtr=temp;
    }
}