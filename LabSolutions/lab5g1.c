#include <stdio.h>

void minMax(int *aPtr,int *size);
void getInput(int arr[],int size);

int main()
{
    int size1;
    printf("Enter the size of array:");
    scanf("%d",&size1);
    int arr[size1];
    getInput(arr,size1);
    minMax(arr,&arr[size1-1]);
}

void getInput(int arr[],int size)
{
    for (size_t i=0;i<size;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
}

void minMax(int *aPtr,int *sPtr)
{
    int *minPtr=aPtr;
    int *maxPtr=aPtr;
    for (;aPtr<=sPtr;aPtr++)
    {
        if (*aPtr<*minPtr)
        {
            minPtr=aPtr;
        }
        else if (*aPtr>*maxPtr)
        {
            maxPtr=aPtr;
        }
    }
    printf("Min=%d,Max=%d",*minPtr,*maxPtr);
}