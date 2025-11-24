#include <stdio.h>


int main()
{
    char s[]="31242 232.55";
    int x;
    double y;
    sscanf(s,"%d%lf",&x,&y);
    printf("Double from string:%.2f Integer from string:%d",y,x);
}