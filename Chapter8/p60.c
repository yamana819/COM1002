#include <stdio.h>
#define SIZE 80


int main()
{
    int c;
    char sentence[SIZE];
    int i=0;
    puts("Enter a line of text:");
    while (i<SIZE-1 && (c=getchar())!='\n')
    {
        sentence[i++]=c;
    }
    sentence[i]='\0';
    puts("The line entered was:");
    puts(sentence);
}