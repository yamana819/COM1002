#include <stdio.h>
//Since the algorithm starts adding values from 3th indice we should initialize the counters from 1.
int main()
{
    int sumOdd=1,sumEven=1,first=0,second=1,third=1,range; 
    printf("Enter the range of fibonacci:");
    scanf("%d",&range);
    for (int counter=1; counter<=range-3;counter++)
    {
        first=second;
        second=third;
        third=second+first;
        switch (counter % 2)
        {
            case 1: 
                sumOdd+=third;
                break;
            case 0:
                sumEven+=third;
                break;
        }
    }
    printf("Sum of fibonacci numbers at even indices:%d\n",sumEven);
    printf("Sum of fibonacci numbers at odd indices:%d\n",sumOdd);
    printf("Total:%d",sumEven+sumOdd);
    return 0;
}