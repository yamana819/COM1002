#include <stdio.h>

int main()
{
    int isPalindrome=0,isPrime=0,number,reversednumber=0,remainder,temp; 
    printf("Enter a number:");
    scanf("%d",&number);
    temp=number;
    while (temp!=0) 
    {
        remainder=temp%10;
        reversednumber=reversednumber*10+remainder;
        temp/=10;
    }
    if (reversednumber==number)
    {
        isPalindrome=2; // If the number is palindrome program assigns 2 to isPalindrome variable.
    }
    for (int i=2;i<number;i++)
    {
        if (number%i==0)
        {
            isPrime=1; //If the number is not prime program assigns 1 to isPrime variable.
            break;
        }
    }
    switch (isPalindrome+isPrime)
    {
        case 1:
        printf("The number %d is neither palindrome nor prime.\n",number);
        break;
        case 0:
        printf("The number %d is prime but not palindrome.\n",number);
        break;
        case 3:
        printf("The number %d is palindrome but not prime.\n",number);
        break;
        case 2:
        printf("The number %d is both palindrome and prime.\n",number);
        break;
    }
    return 0;
}