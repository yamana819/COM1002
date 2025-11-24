#include <stdio.h>
#include <stdlib.h>

struct stackNode
{
    int data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr,int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main(void)
{
    StackNodePtr stackPtr=NULL;
    int value;
    instructions();
    printf("?");
    unsigned int choice;
    scanf("%u",&choice);
    while (choice!=3)
    {
        switch (choice)
        {
        case 1:
            printf("Enter an integer:");
            scanf("%d",&value);
            push(&stackPtr,value);
            printStack(stackPtr);
            break;
        case 2:
            if (!isEmpty(stackPtr))
            {
                printf("The popped value is %d.\n",pop(&stackPtr));
            }
            printStack(stackPtr);
            break;
        default:
            puts("Invalid choice\n");
            instructions();
            break;
        }
        printf("?");
        scanf("%u",&choice);
    }
    puts("End of run");
}

void instructions(void)
{
    puts("Enter choice\n1-to push a value on the stack\n2-to pop a value off the stack\n3-exit.");
}

void push(StackNodePtr *topPtr,int info)
{
    StackNodePtr newPtr=malloc(sizeof(StackNode));
    if (newPtr!=NULL)
    {
        newPtr->data=info;
        newPtr->nextPtr=*topPtr;
        *topPtr=newPtr;
    }
    else 
    {
        printf("No memory available.\n");
    }
}

int pop(StackNodePtr *topPtr)
{
    StackNodePtr tempPtr=*topPtr;
    int popValue=(*topPtr)->data;
    *topPtr=(*topPtr)->nextPtr;
    free(tempPtr);
    return popValue;
}

void printStack(StackNodePtr currentPtr)
{
    if (currentPtr==NULL)
    {
        puts("Stack is empty");
    }
    else 
    {
        puts("The stack is:");
        while (currentPtr!=NULL)
        {
            printf("%d ",currentPtr->data);
            currentPtr=currentPtr->nextPtr;
        }
    }
    puts("");
}

int isEmpty(StackNodePtr topPtr)
{
    return topPtr==NULL;
}