#include <stdio.h>
#include <string.h>

int main()
{
    const char *str1="rqjwwqskafGSrqwqwjrwqj";
    const char *str2="GS";
    printf("The remainder of first occurence of str2 in str1 is %s",strstr(str1,str2));
}