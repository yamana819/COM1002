#include <stdio.h>
#define SIZE 100

size_t linearSearch(int arr[],int key,int size);

int main()
{
    int arr[SIZE];
    int searchKey;
    for (size_t i=0;i<SIZE;i++)
    {
        arr[i]=i*2;
    }
    for (size_t j=0;j<SIZE;j++)
    {
        printf("%d ",arr[j]);
    }
    puts("");
    printf("Enter integer search key:");
    scanf("%d",&searchKey);
    int result=linearSearch(arr,searchKey,SIZE);
    if (result==-1)
    {
        printf("Value not found.\n");
    }
    else 
    {
        printf("Value found at index %d\n",result);
    }
}

size_t linearSearch(int arr[],int key,int size)
{
    for (size_t i=0;i<SIZE;i++)
    {
        if (key==arr[i])
        {
            return i;
        }
    }
    return -1;
}