#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//The following program is a Rock,Paper,Scissors playing against computer.
void recursiveGame(int counter1,int counter2);

int main()
{
    srand(time(NULL));
    recursiveGame(0,0);
}

void recursiveGame(int counter1,int counter2)
{
    int computer,player;
    if (counter1<3 && counter2<3)
    {
        printf("Choose your move(1=Rock,2=Paper,3=Scissors):");
        scanf("%d",&player);
        computer=1+rand()%3;
        switch (player)
        {
            case 1:
                puts("Player chose:Rock.");
                break;
            case 2:
                puts("Player chose:Paper.");
                break;
            case 3:
                puts("Player chose:Scissors.");
                break;
        }
        switch (computer)
        {
            case 1:
                puts("Computer chose:Rock.");
                break;
            case 2:
                puts("Computer chose:Paper.");
                break;
            case 3:
                puts("Computer chose:Scissors.");
                break;
        }
        if ((computer==1 && player==3)||(computer==2 && player==1)||(computer==3 && player==2))
        {
            counter1++;
            printf("Computer wins this round.Computer=%d Player=%d\n",counter1,counter2);
            recursiveGame(counter1,counter2);
        }
        else if (computer==player)
        {
            puts("Draw.No one wins this round.");
            recursiveGame(counter1,counter2);
        }
        else if ((player==1 && computer==3)||(player==2 && computer==1)||(player==3 && computer==2))
        {
            counter2++;
            printf("Player wins this round.Computer=%d Player=%d\n",counter1,counter2);
            recursiveGame(counter1,counter2);
        }
    }
    else 
    {
        if (counter1==3)
        {
            printf("Computer won.\n");
        }
        if (counter2==3)
        {
            printf("Player won.\n");
        }
    }
}