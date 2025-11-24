#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="ABCDEF";
    char str2[]="ABCDQR";
    printf("Compare first 4 of str1 str2 %d\n",memcmp(str1,str2,4));
    printf("Compare first 5 of str1 str2 %d",memcmp(str2,str1,5));
}