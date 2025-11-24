#include <stdio.h>
#include <stdlib.h>

struct listNode
{
    char data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr,char value);
char delete(ListNodePtr *sPtr,char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{
    ListNodePtr startPtr=NULL;
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
                insert(&startPtr,item);
                printList(startPtr);
                break;
            case 2:
                if (!isEmpty(startPtr))
                {
                    printf("Enter character to be deleted:");
                    scanf("\n%c",&item);
        
                    if (delete(&startPtr,item))
                    {
                        printf("%c deleted.\n",item);
                        printList(startPtr);
                    }
                    else 
                    {
                        printf("%c not found.\n",item);
                    }
                }
                else 
                {
                    printf("List is empty.\n");
                }
                    break;
                default:
                    puts("Invalid choice.");
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
    puts("Enter your choice \n1-to insert an element to the list\n2-Delete an element from list\n3-exit.");
}

void insert(ListNodePtr *sPtr,char value)
{
    ListNodePtr newPtr=malloc(sizeof(ListNode));
    if (newPtr!=NULL)
    {
        newPtr->data=value;
        newPtr->nextPtr=NULL;
        ListNodePtr previousPtr=NULL;
        ListNodePtr currentPtr=*sPtr;
        while (currentPtr!=NULL&& value>currentPtr->data)
        {
            previousPtr=currentPtr;
            currentPtr=currentPtr->nextPtr;
        }
        if (previousPtr==NULL)
        {
            newPtr->nextPtr=*sPtr;
            *sPtr=newPtr;
        }
        else 
        {
            previousPtr->nextPtr=newPtr;
            newPtr->nextPtr=currentPtr;
        }
    }
    else 
    {
        printf("%c no inserted no memory available.",value);
    }
}

char delete(ListNodePtr *sPtr,char value)
{
    if (value==((*sPtr)->data))
    {
        ListNodePtr tempPtr=*sPtr;
        *sPtr=(*sPtr)->nextPtr;
        free(tempPtr);
        return value;
    }
    else 
    {
        ListNodePtr previousPtr=*sPtr;
        ListNodePtr currentPtr=(*sPtr)->nextPtr;
        while (currentPtr!=NULL && currentPtr->data!=value)
        {
            previousPtr=currentPtr;
            currentPtr=currentPtr->nextPtr;
        }
        if (currentPtr!=NULL)
        {
            ListNodePtr tempPtr=currentPtr;
            previousPtr->nextPtr=currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return '\0';
}

int isEmpty(ListNodePtr sPtr)
{
    return sPtr==NULL;
}

void printList(ListNodePtr currentPtr)
{
    if (isEmpty(currentPtr))
    {
        puts("The list is empty");
    }
    else 
    {
        puts("The list is:");
        while (currentPtr!=NULL)
        {
            printf("%c ",currentPtr->data);
            currentPtr=currentPtr->nextPtr;
        }
        puts("");
    }
}