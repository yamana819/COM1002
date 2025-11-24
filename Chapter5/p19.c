#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//The following program simulates one of the most popular game of chance called "craps".
enum Status {COUNTINUE,LOST,WON};
int rollDice(void);

int main()
{
    srand(time(NULL));
    int mypoint;
    enum Status gamestatus;
    int sum=rollDice();
    switch (sum)
    {
        case 7:
        case 11:
            gamestatus=WON;
            break;
        case 2:
        case 3:
        case 12:
            gamestatus=LOST;
            break;
        default:
            gamestatus=COUNTINUE;
            mypoint=sum;
            printf("Your point is %d.\n",mypoint);
            break;
    }
    while (gamestatus==COUNTINUE)
    {
        sum=rollDice();
        if (sum==mypoint)
        {
            gamestatus=WON;
        }
        else if (sum==7)
        {
            gamestatus=LOST;
        }
    }
    if (gamestatus==WON)
    {
        puts("Player's won.");
    }
    else 
    {
        puts("Player's lost.");
    }
}

int rollDice(void)
{
    int dice1,dice2;
    dice1=1+rand()%6;
    dice2=1+rand()%6;
    printf("Player rolled %d and %d sum:%d\n",dice1,dice2,dice1+dice2);
    return dice1+dice2;
}