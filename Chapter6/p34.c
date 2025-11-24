#include <stdio.h>
//The following program computes the median,the average and the first mode of an array.
void insertArr(int arr[],int size);
void printArr(int arr[],int size);
void bubbleSort(int arr[],int size);
float averageArr(int arr[],int size);
float medianArr(int arr[],int size);
int modeArr(int arr[],int size);

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    insertArr(arr,size);
    printArr(arr,size);
    bubbleSort(arr,size);
    printArr(arr,size);
    printf("The median is:%.2f\n",medianArr(arr,size));
    printf("The average is:%.2f\n",averageArr(arr,size));
    printf("The first mode is:%d\n",modeArr(arr,size));
}

void insertArr(int arr[],int size)
{
    for (size_t i=0;i<size;i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
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

float averageArr(int arr[],int size)
{
    int total=0;
    for (size_t i=0;i<size;i++)
    {
        total+=arr[i];
    }
    return (float) total/size;
}

float medianArr(int arr[],int size)
{
    float median;
    switch(size%2)
    {
        case 0:
            median=(float) (arr[(size/2)-1]+arr[size/2])/2;
            break;
        case 1:
            median=arr[size/2];
            break;
    }
    return median;
}

int modeArr(int arr[],int size)
{
    int length=arr[size-1];
    int frequency[length+1];
    for (size_t j=0;j<length+1;j++)
    {
        frequency[j]=0;
    }
    for (size_t i=0;i<size;i++)
    {
        frequency[arr[i]]++;
    }
    int largest=0,mode=0;
    for (size_t a=0;a<length+1;a++)
    {
        if (frequency[a]>largest)
        {
            largest=frequency[a];
            mode=a;
        }
    }
    return mode;
}
