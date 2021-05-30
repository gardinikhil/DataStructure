#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;

void add_at_end(int data)
{
    struct node *newNode 
    = (struct node*)malloc(sizeof(struct node));

    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        temp=newNode;
    }
    else
    {
        temp=head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void delete_at_end()
{
    temp=head;
    while(temp->next->next)
    {
        temp=temp->next;
    }
    temp->next=NULL;
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
    add_at_end(5);
    add_at_end(6);
    add_at_end(7);
    add_at_end(8);
    traverse(head);
    delete_at_end();
    delete_at_end();
    printf("\n");
    traverse(head);
    return 0;
}