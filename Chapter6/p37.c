#include <stdio.h>
#define SIZE 100

size_t recursiveBinarySearch(int arr[],size_t low,size_t high,int key);

int main()
{
    int arr[SIZE];
    int searchKey;
    for (size_t i=0;i<SIZE;i++)
    {
        arr[i]=2*i;
    }
    printf("Enter integer search key:");
    scanf("%d",&searchKey);
    size_t result=recursiveBinarySearch(arr,0,SIZE,searchKey);
    if (result==-1)
    {
        printf("Value not found.");
    }
    else 
    {
        printf("Value found at index %d.",result);
    }   
}

size_t recursiveBinarySearch(int arr[],size_t low,size_t high,int key)
{
    if (low<=high)
    {
        size_t middle=(low+high)/2;
        if (arr[middle]==key)
        {
            return middle;
        }
        else if (arr[middle]<key)
        {
            low=middle+1;
            return recursiveBinarySearch(arr,low,high,key);
        }
        else if (arr[middle]>key)
        {
            high=middle-1;
            return recursiveBinarySearch(arr,low,high,key);
        }
    }
    return -1;
}