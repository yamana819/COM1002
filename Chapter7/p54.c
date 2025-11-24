#include <stdio.h>
#define SIZE 10

void bubbleSort(int work[],size_t size,int (*compare)(int a,int b));
int ascending(int a,int b);
int descending(int a,int b);

int main()
{
    int arr[SIZE]={2,4,3,1,5,7,6,9,11,10};
    int order;
    printf("Enter 1 to sort ascending order,enter 2 to sort descending order:");
    scanf("%d",&order);
    for (size_t i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
    puts("");
    if (order==1)
    {
        bubbleSort(arr,SIZE,ascending);
    }
    else
    {
        bubbleSort(arr,SIZE,descending);
    }
    for (size_t j=0;j<SIZE;j++)
    {
        printf("%d ",arr[j]);
    }
}

void bubbleSort(int work[],size_t size,int (*compare)(int a,int b))
{
    for (size_t a=0;a<size;a++)
    {
        for (size_t b=0;b<size-1;b++)
        {
            if ((*compare)(work[b],work[b+1]))
            {
                int temp=work[b+1];
                work[b+1]=work[b];
                work[b]=temp;
            }
        }
    }
}

int ascending(int a,int b)
{
    return a>b;
}

int descending(int a,int b)
{
    return a<b;
}