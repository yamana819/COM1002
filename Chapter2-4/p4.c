#include <stdio.h>

int main(void)
{
    int integer1,integer2,sum;

    printf("Enter the first integer:");
    scanf("%d",&integer1);

    printf("Enter the second integer:");
    scanf("%d",&integer2);

    sum=integer1+integer2;

    printf("Sum is %d\n",sum);
    return 0;
}