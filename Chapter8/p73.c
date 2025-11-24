#include <stdio.h>
#include <string.h>

int main()
{
    char s1[17];
    char s2[]="copy this string";
    mempcpy(s1,s2,17);
    printf("%s",s1);
}