#include <stdio.h>

typedef struct 
{
    char *face;
    char *suit;
}Card;

int main()
{
    Card aCard;
    aCard.face="Spades";
    aCard.suit="Ace";
    printf("%s of %s\n",aCard.suit,aCard.face);
    typedef int Integer;
    Integer int1=6;
    printf("%d",int1);
}