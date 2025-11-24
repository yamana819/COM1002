#include <stdio.h>
#define SIZE 20
int main()
{
    char string1[]="string literal";
    char string2[SIZE];
    printf("Enter a string:");
    scanf("%19s",string2);
    printf("%c",string2[2]);
}