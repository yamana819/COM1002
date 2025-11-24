#include <stdio.h>
#include <limits.h>

void displayBits(unsigned int value);

int main()
{
    unsigned int x;
    printf("Enter a nonnegative integer:");
    scanf("%u",&x);
    displayBits(x);
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