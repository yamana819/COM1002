#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="AFYAFYAFYAFYAFY";
    char a='a';
    memset(s,a,5);
    printf("After memset %s",s);
}