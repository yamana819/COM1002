#include <stdio.h>
//The following program calculates the fibonacci number in the indice that is entered by user by using recursion.
unsigned long long int recursiveFibonacci(int);

int main()
{
    int integer1;
    printf("Enter an integer:");
    scanf("%d",&integer1);
    printf("Fibonacci(%d)=%llu",integer1,recursiveFibonacci(integer1));
}

unsigned long long int recursiveFibonacci(int a)
{
    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    else 
    {
        return recursiveFibonacci(a-1)+recursiveFibonacci(a-2);
    }
}
