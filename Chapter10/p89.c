#include <stdio.h>

enum months {JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};

int main()
{
    char *monthName[]={"","Jenuary","February","March","April","May","June","July","August","September","October","November","December"};
    for (enum months month=JAN;month<=DEC;month++)
    {
        printf("%d:%s\n",month,monthName[month]);
    }
}
