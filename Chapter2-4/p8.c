#include <stdio.h>

int main(void)
{
    int result;
    unsigned int failedResults=0,passedResults=0,counter=1;
    while (counter<=10)
    {
        printf("Enter a result (Passed=1,Failed=2):");
        scanf("%d",&result);
        if (result==1)
        {
            passedResults++;
        }
        else if (result==2)
        {
            failedResults++;
        }
        counter++;
    }
    printf("Failed Students:%d Passed Students:%d\n",failedResults,passedResults);
    if (passedResults>8)
    {
        puts("Bonus to instructor!");
    }
    return 0;
}