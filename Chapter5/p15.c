#include <stdio.h>

int maximum(int x,int y,int z);

int main()
{
    int a,b,c;
    printf("Enter tree integer:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The maximum is:%d",maximum(a,b,c));
}
int maximum(int x,int y,int z)
{
    int max=x;
    if (y>max)
    {
        max=y;
    }
    if (z>max)
    {
        max=z;
    }
    return max;
}