#include <stdio.h>
#include <limits.h>

void displayBits(unsigned int value);

int main()
{
    unsigned int number1=65535;
    unsigned int mask=1;
    puts("The results of combining the following.");
    displayBits(number1);
    displayBits(mask);
    puts("Using the bitwise and operator:");
    displayBits(number1&mask);
    number1=15;
    unsigned int setBits=241;
    puts("The results of combining the following.");
    displayBits(number1);
    displayBits(setBits);
    puts("Using the bitwise or operator:");
    displayBits(number1 | setBits);
    number1=139;
    unsigned int number2=199;
    puts("The results of combining the following.");
    displayBits(number1);
    displayBits(number2);
    puts("Using the bitwise exclusive or operator:");
    displayBits(number1^number2);
    number1=21845;
    puts("\nThe once complement of ");
    displayBits(number1);
    puts("is");
    displayBits(~number1);
}

void displayBits(unsigned int value)
{
    unsigned int displayMask=1<<CHAR_BIT*sizeof(unsigned int)-1;
    printf("%10u=",value);
    for (unsigned int c=1;c<=CHAR_BIT*sizeof(unsigned int);c++)
    {
        putchar(value&displayMask ?'1':'0');
        value<<=1;
        if (c%8==0)
        {
            putchar(' ');
        }
    }
    puts("");
}