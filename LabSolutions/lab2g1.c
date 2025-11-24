#include <stdio.h>
//The following program calculates the greatest common divisor and least common multiple by using euclidean algorithm.
int main()
{
    int integer1,integer2,quotient,remainder,counter=0,greatest,least;
    printf("Enter two integers:");
    scanf("%d %d",&integer1,&integer2);
    if (integer1>=integer2)
    {
        greatest=integer1;
        least=integer2;
    }
    else
    {
        greatest=integer2;
        least=integer1;
    }
    do
    {
        quotient=greatest/least;
        remainder=greatest%least;
        printf("First integer=%d Second integer=%d quotient=%d remainder=%d\n",greatest,least,quotient,remainder);
        greatest=least;
        least=remainder;
        counter++;
    }
    while (remainder!=0);
    printf("GCD found in %d steps.\n",counter);
    printf("The GCD of the numbers:%d The LMC of the numbers:%d\n",greatest,(integer1*integer2)/greatest);
}