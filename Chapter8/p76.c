#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="This is a test";
    printf("Enter a character to search for:");
    char c;
    scanf("%c",&c);
    printf("String from the first occurence of the character is %s",(char *)memchr(s,c,14));
}