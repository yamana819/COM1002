#include <stdio.h>

int main()
{
    unsigned int counter=1;
    do
    {
        printf("%u\n",counter);
        counter++;
    }
    while (counter<=10);
}