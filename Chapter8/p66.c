#include <stdio.h>
#include <string.h>

int main()
{
    const char *str="This is a test";
    char character;
    printf("Enter a character:");
    scanf("%c",&character);
    if (strchr(str,character)!=NULL)
    {
        printf("%c found in %s",character,str);
    }
    else 
    {
        printf("%c not found in %s",character,str);
    }
}