#include <stdio.h>

struct card 
{
    char *face;
    char *suit;
};

int main()
{
    struct card aCard;
    aCard.face="Ace";
    aCard.suit="Spades";
    struct card *cardPtr=&aCard;
    printf("%s of %s\n",aCard.suit,aCard.face);
    printf("%s of %s\n",cardPtr->suit,cardPtr->face);
    printf("%s of %s\n",(*cardPtr).suit,(*cardPtr).face);
}