#include <stdio.h>

void modifyInt(const int *xPtr);

int main()
{
    int y;
    modifyInt(&y);
}


void modifyInt(const int *xPtr)
{
    *xPtr=5;
}