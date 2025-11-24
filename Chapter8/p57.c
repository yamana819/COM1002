#include <stdio.h>
#include <stdlib.h>


int main()
{
    const char *string="51.2\% are admitted";
    char *strPtr;
    double d=strtod(string,&strPtr);
    printf("The string %s is converted to ",string);
    printf("the double value %.2f and the string %s",d,strPtr);
}