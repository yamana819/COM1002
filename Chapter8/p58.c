#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *string="-2141232abawrqw";
    char *strPtr;
    long x =strtol(string,&strPtr,0);
    printf("The original string is %s",string);
    puts("");
    printf("The converted value %ld",x);
    puts("");
    printf("The remainder of the original string %s",strPtr);
}