#include <stdio.h>
#include <string.h>

int main()
{
    char string[]="This is a sentence with 7 tokens";
    printf("String to be tokenized is %s\n",string);
    char *tokenPtr=strtok(string," ");
    while (tokenPtr!=NULL)
    {
        printf("%s\n",tokenPtr);
        tokenPtr=strtok(NULL," ");
    }
}