#include <stdio.h>
#include <string.h>

int main()
{
    const char *string1="A zoo has many animals including zebras.";
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    printf("%s",strrchr(string1,c));
}