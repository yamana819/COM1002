#include <stdio.h>
#define CARDS 52

struct bitCard 
{
    unsigned int face:4;
    unsigned int suit:2;
    unsigned int color:1;
};

typedef struct bitCard Card;

void fillDeck(Card * const deck);
void deal(const Card * const deck);

int main()
{
    Card deck[CARDS];
    fillDeck(deck);
    puts("Card values 0-12 corresponds to Ace through King.");
    puts("Card values 0-3 corresponds to Hearts Diamonds Clubs and Spades");
    puts("Card values 0-1 corresponds to red and black\n.");
    deal(deck);
}

void fillDeck(Card * const deck)
{
    for (size_t i=0;i<CARDS;i++)
    {
        deck[i].face=i%(CARDS/4);
        deck[i].suit=i/(CARDS/4);
        deck[i].color=i/(CARDS/2);
    }
}

void deal(const Card * const deck)
{
    printf("%-6s%-6s%-15s%-6s%-6s%-6s\n",
           "Card", "Suit", "Color", "Card", "Suit", "Color");
    for (size_t k1 = 0, k2 = k1 + 26; k1 < CARDS / 2; ++k1, ++k2) 
    {
        printf("Card:%3d  Suit:%2d  Color:%2d  ",
               deck[k1].face, deck[k1].suit, deck[k1].color);
        printf("Card:%3d  Suit:%2d  Color:%2d\n",
               deck[k2].face, deck[k2].suit, deck[k2].color); 
    }
}
