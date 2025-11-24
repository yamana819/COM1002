#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

int main()
{
    int responses[RESPONSES_SIZE]={3, 7, 1, 9, 5, 6, 2, 8, 4, 10, 3, 5, 7, 2, 1, 6, 8, 9, 4, 10, 2, 7, 5, 1, 3, 9, 6, 4, 8, 10, 5, 2, 7, 3, 1, 9, 6, 4, 8, 10};
    int frequency[FREQUENCY_SIZE]={0};
    for (size_t i=0;i<RESPONSES_SIZE;i++)
    {
        frequency[responses[i]]++;
    }
    for (size_t i=1;i<FREQUENCY_SIZE;i++)
    {
        printf("%d:%d\n",i,frequency[i]);
    }
}