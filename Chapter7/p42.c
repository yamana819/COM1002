#include <stdio.h>

void printString(const char * sPtr);


int main()
{
    char string[]={"Ezio Auditore"};
    printString(string);
}

void printString(const char * sPtr)
{
    while (*sPtr!='\0')
    {
       printf("%c",*sPtr);
       sPtr++;
    }
}