#include <stdio.h>


int main()
{
    const char *suit[4]={"Hearts","Diamonds","Spades","Clubs"};
    for (size_t i=0;i<4;i++)
    {
        for (size_t j=0;*(suit[i]+j)!='\0';j++)
        {
            printf("%c",*(suit[i]+j));
        }
        puts("");
    }
}