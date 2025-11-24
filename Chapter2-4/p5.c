#include <stdio.h>

int main(void)
{
    int integer1,integer2,count;
    printf("Please enter an integer less than 100 in order to find out the first power greater than 100:");
    scanf("%d",&integer1);
    integer2=integer1;
    count=1;
    while (integer1<=100)
    {
        integer1*=integer2;
        count+=1;
    }
    printf("The first power of %d greater than 100 is %d and it is the %dth power of it.",integer2,integer1,count);
    return 0;
}