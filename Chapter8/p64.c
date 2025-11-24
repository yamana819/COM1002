#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20]="Happy ";
    char s2[]="New year";
    char s3[40]="";
    printf("s1=%s s2=%s\n",s1,s2);
    strcat(s1,s2);
    printf("After strcat(s1,s2) %s\n",s1);
    strncat(s3,s1,6);
    printf("After strncat(s3,s1,6) %s\n",s3);
    strcat(s3,s1);
    printf("After strcat(s3,s1) %s\n",s3);
}