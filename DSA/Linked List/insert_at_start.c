#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
//struct node *temp = NULL;

void insert_at_start(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

void traverse(struct node *temp)
{
    while (temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}

int main()
{
    insert_at_start(5);
    insert_at_start(4);
    insert_at_start(3);
    insert_at_start(2);
    traverse(head);
}