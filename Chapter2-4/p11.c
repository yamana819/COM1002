#include <stdio.h>
#include <math.h> //It is necessary for power function(pow)

int main()
{
    double principal=1000.0,rate=.05,amount;
    printf("%4s%21s\n","Year","Amount of deposit");
    for (int year=1;year<=10;year++)
    {
        amount=principal*pow(1.0+rate,year);
        printf("%4u%21.2f\n",year,amount);
    }
    return 0;
}