#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//The following program is a guess game which the use tries to find out the number that is choosen by computer randomly.
void recursiveGuessGame(int target,int counter);

int main()
{
    srand(time(NULL));
    int target;
    target=1+rand()%50;
    recursiveGuessGame(target,1);
}


void recursiveGuessGame(int target,int counter)
{
    int guess;
    if (counter<=5)
    {
        printf("Attempt-%d/5 Enter your guess:",counter);
        scanf("%d",&guess);
        if (guess==target)
        {
            printf("Correct you have guessed in %d attempts.\n",counter);
        }
        else if (guess<target)
        {
            printf("Too low,Try again\n");
            counter++;
            recursiveGuessGame(target,counter);
        }
        else if (guess>target)
        {
            printf("Too high.Try again\n");
            counter++;
            recursiveGuessGame(target,counter);
        }
    }
    else 
    {
        printf("Sorry,you are out of guesses.The correct number was %d\n",target);
    }
}