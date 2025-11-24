#include <stdio.h>
//The following program calculates the collatz sequence of two integers.
int main()
{
    int integer1,integer2,counter1=1,counter2=1,original1,original2;
    printf("Enter two integers:");
    scanf("%d %d",&integer1,&integer2);
    original1=integer1;
    original2=integer2;
    printf("%d",integer1);
    do 
    {
        if (integer1%2==0)
        {
            integer1/=2;
            printf("-%d",integer1);
        }
        else
        {
            integer1=integer1*3+1;
            printf("-%d",integer1);
        }
        counter1++;
    }
    while (integer1>1);
    printf("\nSequence length for %d is %d\n",original1,counter1);
    printf("%d",integer2);
    do 
    {
        if (integer2%2==0)
        {
            integer2/=2;
            printf("-%d",integer2);
        }
        else
        {
            integer2=integer2*3+1;
            printf("-%d",integer2);
        }
        counter2++;
    }
    while (integer2>1);
    printf("\nSequence length for %d is %d\n",original2,counter2);
    if (counter1>counter2)
    {
        printf("The length of sequence for %d is longer.",original1);
    }
    else if (counter2>counter1)
    {
        printf("The length of sequence for %d is larger",original2);
    }
    else
    {
        printf("The length of these sequences are equal");
    }
}