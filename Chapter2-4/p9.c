#include <stdio.h>
//The following program calculates the factorial of a value that is inputted by user.
int main()
{
    int integer1,integer2=1;
    printf("Enter a number:");
    scanf("%d",&integer1);
    for (;integer1>=1;integer1--)
    {
        integer2*=integer1;
    }
    printf("%d\n",integer2);
    return 0;
}