#include <stdio.h>


int main()
{
    char c;
    short s;
    int i;
    long int l;
    float f;
    long long int ll;
    double d;
    long double ld;
    int arr[20];
    int *ptr=arr;
    printf("sizeof(char)%u,sizeof(short)%u,sizeof(int)%u,sizeof(float)%u,sizeof(long long int)%u,sizeof(double)%u,sizeof(long double)%u,"
    ,sizeof(c),sizeof(s),sizeof(i),sizeof(l),sizeof(f),sizeof(ll),sizeof(d),sizeof(ld));
    printf(",sizeof(array)%u,sizeof(pointer)%u",sizeof(arr),sizeof(ptr));
}