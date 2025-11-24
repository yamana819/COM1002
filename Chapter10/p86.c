#include <stdio.h>
#include <limits.h>

void displayBits(unsigned int value);

int main()
{
    unsigned int number1=960;
    puts("The result of left shifting:");
    displayBits(number1);
    puts("8 bit positions using the left shift operator:");
    displayBits(number1<<8);
    puts("The result of right shifting:");
    displayBits(number1);
    puts("8 bit positions after the right shift operator:");
    displayBits(number1>>8);
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