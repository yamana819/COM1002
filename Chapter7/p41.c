#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *sPtr);

int main()
{
    char string1[]={"The biggest team in Turkiye is GALATASARAY."};
    printf("String before the function call:%s\n",string1);
    convertToUpperCase(string1);
    printf("String after the function call:%s\n",string1);
}


void convertToUpperCase(char *sPtr)
{
    while (*sPtr!='\0')
    {
        *sPtr=toupper(*sPtr);
        sPtr++;
    }
}