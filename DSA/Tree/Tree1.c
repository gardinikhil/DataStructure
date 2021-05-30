#include<stdio.h>
#include<stdlib.h>

struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
};

struct treeNode *root = NULL;
struct treeNode *temp = NULL;
struct treeNode *parent = NULL;

void insertData(int data)
{
    struct treeNode *newNode = (struct treeNode*)malloc(sizeof(struct treeNode));

    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    if(root == NULL)
    {
        root=newNode;
    }
    else
    {
        temp=root;
        while(temp)
        {
            parent=temp;
            if(data<parent->data)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        if(data<parent->data)
        {
            parent->left=newNode;
        }
        else
        {
            parent->right=newNode;
        }
    }
}

void inorder(struct treeNode *tp)
{
    if(tp==NULL)
	{
		return;
	}
    inorder(tp->left);
    printf("%d ",tp->data);
    inorder(tp->right);
}

void preOrder(struct treeNode *tp)
{
    if(tp==NULL)
	{
		return;
	}
    printf("%d ",tp->data);
    preOrder(tp->left);
    preOrder(tp->right);
}

void postOrder(struct treeNode *tp)
{
    if(tp==NULL)
	{
		return;
	}
    postOrder(tp->left);
    postOrder(tp->right);
    printf("%d ",tp->data);
}
int main()
{
    int data;
    int again;
    do
    {
        printf("Enter data to insert: ");
        scanf("%d",&data);
        insertData(data);
        printf("Do you want to insert again(press 1 for yes and 0 for exit): ");
        scanf("%d",&again);
    } while (again);
    
    printf("Inorder: ");
    inorder(root);
    printf("\nPreOrder: ");
    preOrder(root);
    printf("\nPostOrder: ");
    postOrder(root);
    return 0;
}
