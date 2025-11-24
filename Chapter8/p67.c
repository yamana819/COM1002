#include <stdio.h>
#include <string.h>

int main()
{
    const char *str="En buyuk cim bom 123214124";
    const char *str2="123456789";
    printf("String1=%s String2=%s\n",str,str2);
    printf("The length of the initial segment of string1 containing no characters from string2:%d",strcspn(str,str2));
}