#include <stdio.h>
#include <string.h>

int main()
{
    const char *str1="3.12312312 srqwrqetqrw";
    const char *str2="1234567890.";
    printf("The length of the initial part of str1 consists of str2 %d",strspn(str1,str2));
}