#include <stdio.h>

void bubbleSort(int arr[],int  size);
void swap(int *element1Ptr,int *element2Ptr);

int main()
{
    int arr[]={1,3,4,2,1,9,5,6,3,2};
    int * lptr=&arr[(sizeof(arr)/sizeof(arr[0])-1)];
    bubbleSort(arr,lptr-arr);
    for (size_t i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }
}   

void bubbleSort(int arr[],int  size)
{
    for (size_t i=0;i<size;i++)
    {
        for (size_t j=0;j<size-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void swap(int *element1Ptr,int *element2Ptr)
{
    int temp=*element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr=temp;
}