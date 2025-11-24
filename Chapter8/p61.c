#include <stdio.h>
#define SIZE 80


int main()
{
    int x;
    double y;
    puts("Enter an integer and a dobule:");
    scanf("%d%lf",&x,&y);
    char s[SIZE];
    sprintf(s,"integer:%d\ndouble:%.2f",x,y);
    printf("%s",s);
}