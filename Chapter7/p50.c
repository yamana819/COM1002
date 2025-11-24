#include <stdio.h>
#define SIZE 10

void copy1(char *const s1,const char * s2);
void copy2(char *s1,const char *s2);


int main()
{
    char *string2="Hello";
    char string1[SIZE];
    copy1(string1,string2);
    printf("%s\n",string1);
    char string3[SIZE];
    char string4[]="Good bye";
    copy2(string3,string4);
    printf("%s\n",string3);
}

void copy1(char *const s1,const char * s2)
{
    for (size_t i=0;(s1[i]=s2[i])!='\0';i++)
    {

    }
}

void copy2(char *s1,const char *s2)
{
    for (;(*s1=*s2)!='\0';s1++,s2++)
    {

    }
}