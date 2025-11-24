#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main()
{
    char x[]="Happy birthday to you";
    char y[SIZE1];
    char z[SIZE2];
    strcpy(y,x);
    printf("Using strcopy :%s\n",y);
    strncpy(z,x,SIZE2-1);
    z[SIZE2-1]='\0';
    printf("Using strncopy:%s",z);
}