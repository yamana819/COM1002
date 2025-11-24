#include <stdio.h>

int main()
{
    int sum=0;
    for (int number=0;number<=100;number+=2) 
    {
        sum+=number;            //for (int number=0;number<=100;sum+=number,number+=2) this is the short form of it
    }
    printf("%d\n",sum);
    return 0;
}