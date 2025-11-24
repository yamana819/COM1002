#include <stdio.h>


int main()
{
    int x=12,*xPtr=&x;
    printf("The address of x is (&x) %x and the adress of x is (xPtr) %p.\n",&x,xPtr);
    printf("The value of x is (x) %d and the value of x (*xPtr) %d \n",x,*xPtr);
    printf("The values of &*xPtr or *&xptr are %x %x.",&*xPtr,*&xPtr);
}