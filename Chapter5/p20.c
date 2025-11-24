#include <stdio.h>

void useStatic();

int main()
{
    useStatic();
    useStatic();
}


void useStatic()
{
    static int x=50;
    printf("x=%d ",x);
    x++;
    printf("x=%d ",x);
}