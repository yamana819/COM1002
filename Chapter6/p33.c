#include <stdio.h>

void staticArr();
void automaticArr();

int main()
{
    staticArr();
    automaticArr();
    puts("");
    staticArr();
    automaticArr();
}

void staticArr()
{
    static int arr[3];
    for (size_t i=0;i<3;i++)
    {
        printf("%d:%d\n",i,arr[i]);
    }
    for (size_t j=0;j<3;j++)
    {
        arr[j]+=5;
        printf("%d:%d\n",j,arr[j]);
    }
}

void automaticArr()
{
    int arr[3]={0};
    for (size_t i=0;i<3;i++)
    {
        printf("%d:%d\n",i,arr[i]);
    }
    for (size_t j=0;j<3;j++)
    {
        arr[j]+=5;
        printf("%d:%d\n",j,arr[j]);
    }
}