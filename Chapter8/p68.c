#include <stdio.h>
#include <string.h>

int main()
{
    const char *str1="this is a test";
    const char *str2="beware";
    printf("from str2:%s \'%c\' first occur in str1: %s",str2,*strpbrk(str1,str2),str1);
}