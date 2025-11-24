#include <stdio.h>
//The following program uses the bubble sort algorithm to sort the elements of an array.
void bubbleSort(int arr[],int size);
void printArr(int arr[],int size);
void insertElement(int arr[],int size);

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    insertElement(arr,size);
    printArr(arr,size);
    bubbleSort(arr,size);
    printArr(arr,size);
}

void bubbleSort(int arr[],int size)
{
    for (size_t i=0;i<size;i++)
    {
        for (size_t j=0;j<size-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int hold=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=hold;
            }
        }
    }
}

void printArr(int arr[],int size)
{
    for (size_t i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    puts("");
}

void insertElement(int arr[],int size)
{
    for (size_t i=0;i<size;i++)
    {
        printf("Enter an element:");
        scanf("%d",&arr[i]);
    }
}