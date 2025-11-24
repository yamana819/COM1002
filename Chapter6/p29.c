#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main()
{
    int arr[SIZE]={0};
    srand(time(NULL));
    for (int i=1;i<=6000000;i++)
    {
        size_t face=1+rand()%6;
        arr[face]++;
    }
    for (size_t j=1;j<SIZE;j++)
    {
        printf("%d:%d\n",j,arr[j]);
    }
}