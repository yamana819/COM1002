#include <stdio.h>

struct Author 
{
    char name[30];
    int books;
    int pages;
};

void getInformation(struct Author authors[],size_t length);
void printData(struct Author authors[],size_t length);


int main()
{
    struct Author authors[3];
    getInformation(authors,3);
    printData(authors,3);
}

void getInformation(struct Author authors[],size_t length)
{
    for (size_t i=0;i<length;i++)
    {
        printf("Author name:");
        scanf("%29s",authors[i].name);
        printf("Number of books written:");
        scanf("%d",&authors[i].books);
        printf("Total number of pages written:");
        scanf("%d",&authors[i].pages);
        puts("");
    }
    puts("");
}

void printData(struct Author authors[],size_t length)
{
    int max=0;
    char *str;
    for (size_t i=0;i<length;i++)
    {
        int average=authors[i].pages/authors[i].books;
        printf("Author:%s\n",authors[i].name);
        printf("Average book length:%d\n",average);
        puts("");
        if (average>max)
        {
            max=average;
            str=authors[i].name;
        }
    }
    printf("Most Efficent Author:%s(Average:%d)",str,max);
}