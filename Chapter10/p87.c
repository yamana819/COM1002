#include <stdio.h>

union number 
{
    int x;
    double y;
};

int main()
{
    union number value;
    value.x=100;
    printf("int:%d double:%f\n",value.x,value.y);
    value.y=100.0;
    printf("int:%d double:%.f",value.x,value.y);
}