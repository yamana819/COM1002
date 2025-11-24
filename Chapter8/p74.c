#include <stdio.h>
#include <string.h>

int main()
{
    char x[]="Home Sweet Home";
    printf("Before memmove %s ",x);
    memmove(x,&x[5],10);
    printf("After memmove %s",x);
}