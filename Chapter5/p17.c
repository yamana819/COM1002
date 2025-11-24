#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int counter1=0,counter2=0,counter3=0,counter4=0,counter5=0,counter6=0;
    srand(time(NULL));
    for (unsigned int i=1;i<=6000000;i++)
    {
        int dice=1+rand()%6;
        switch (dice)
        {
            case 1:
            counter1++;
            break;
            case 2:
            counter2++;
            break;
            case 3:
            counter3++;
            break;
            case 4:
            counter4++;
            break;
            case 5:
            counter5;
            counter5++;
            break;
            case 6:
            counter6++;
            break;
        }
    }
    printf("6:%d,5:%d,4:%d,3:%d,2:%d,1:%d",counter6,counter5,counter4,counter3,counter2,counter1);
}