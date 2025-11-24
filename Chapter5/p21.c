#include <stdio.h>
//The following program calculates the factorial of an integer by using recursion(Maximum value that can be calculated with the function is 20!).
unsigned long long int recursiveFactorial(unsigned int a);

int main()
{
    int integer1;
    printf("Enter an integer:");
    scanf("%d",&integer1);
    printf("Factorial:%llu",recursiveFactorial(integer1));
}

unsigned long long int recursiveFactorial(unsigned int a)
{
    if (a==0)
    {
        return 1;
    }
    else 
    {
        return a*recursiveFactorial(a-1);
    }
}