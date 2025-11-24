#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct treeNode
{
    struct treeNode *leftPtr;
    int data;
    struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

void insertNode(TreeNodePtr *treePtr,int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

int main()
{
    TreeNodePtr rootPtr=NULL;
    srand(time(NULL));
    puts("The numbers being placed in the tree are:");
    for (unsigned int i=1;i<=10;i++)
    {
        int item=rand()%15;
        printf("%d ",item);
        insertNode(&rootPtr,item);
    }
    puts("");
    puts("The preorder traversal is:");
    preOrder(rootPtr);
    puts("");
    puts("The postorder traversal is:");
    postOrder(rootPtr);
    puts("");
    puts("The inorder traversal is:");
    inOrder(rootPtr);
    puts("");
}

void insertNode(TreeNodePtr *treePtr,int value)
{
    if (*treePtr==NULL)
    {
        *treePtr=malloc(sizeof(TreeNode));
        if (*treePtr!=NULL)
        {
            (*treePtr)->data=value;
            (*treePtr)->leftPtr=NULL;
            (*treePtr)->rightPtr=NULL;
        }
        else 
        {
            puts("No memory available.");
        }
    }
    else 
    {
        if (value<(*treePtr)->data)
        {
            insertNode(&((*treePtr)->leftPtr),value);
        }
        else if (value>(*treePtr)->data)
        {
            insertNode(&((*treePtr)->rightPtr),value);
        }
        else 
        {
            printf("dup ");
        }
    }
}

void inOrder(TreeNodePtr treePtr)
{
    if (treePtr!=NULL)
    {
        inOrder(treePtr->leftPtr);
        printf("%d ",treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

void preOrder(TreeNodePtr treePtr)
{
    if (treePtr!=NULL)
    {
        printf("%d ",treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}

void postOrder(TreeNodePtr treePtr)
{
    if (treePtr!=NULL)
    {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%d ",treePtr->data);
    }
}