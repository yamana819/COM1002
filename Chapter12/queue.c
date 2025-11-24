#include <stdio.h>
#include <stdlib.h>

struct queueNode
{
    char data;
    struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr,QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr,QueueNodePtr *tailPtr,char value);
void instructions(void);

int main()
{
    QueueNodePtr headPtr=NULL;
    QueueNodePtr tailPtr=NULL;
    char item;
    instructions();
    printf("?");
    unsigned int choice;
    scanf("%u",&choice);
    while (choice!=3)
    {
        switch (choice)
        {
        case 1:
            printf("Enter a character:");
            scanf("\n%c",&item);
            enqueue(&headPtr,&tailPtr,item);
            printQueue(headPtr);
            break;
        case 2:
            if (!isEmpty(headPtr))
            {
                item=dequeue(&headPtr,&tailPtr);
                printf("%c has ben deleted.\n",item);
            }
            break;
        default:
            printf("Invalid choice.\n");
            instructions();
            break;
        }
        printf("?");
        scanf("%u",&choice);
    }
    puts("End of run.");   
}

void instructions(void)
{
    puts("Enter a choice\n1-to add an item to the queue\n2-to delete an item from the queue\n3-exit.");
}

void enqueue(QueueNodePtr *headPtr,QueueNodePtr *tailPtr,char value)
{
    QueueNodePtr newPtr=malloc(sizeof(QueueNode));
    if (newPtr!=NULL)
    {
        newPtr->data=value;
        newPtr->nextPtr=NULL;
        if (isEmpty(*headPtr))
        {
            *headPtr=newPtr;
        }
        else 
        {
            (*tailPtr)->nextPtr=newPtr;
        }
        *tailPtr=newPtr;
    }
    else
    {
        puts("No memory available.");
    }
}

char dequeue(QueueNodePtr *headPtr,QueueNodePtr *tailPtr)
{
    char value=(*headPtr)->data;
    QueueNodePtr tempPtr=*headPtr;
    *headPtr=(*headPtr)->nextPtr;
    if (*headPtr==NULL)
    {
        *tailPtr=NULL;
    }
    free(tempPtr);
    return value;
}

int isEmpty(QueueNodePtr headPtr)
{
    return headPtr==NULL;
}

void printQueue(QueueNodePtr currentPtr)
{
    if (currentPtr==NULL)
    {
        puts("Queue is empty");
    }
    else 
    {
        puts("Queue is:");
        while (currentPtr!=NULL)
        {
            printf("%c ",currentPtr->data);
            currentPtr=currentPtr->nextPtr;
        }
    }
    puts("");
}