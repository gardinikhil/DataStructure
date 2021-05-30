#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;

void insert_at_pos(int data,int pos)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    int i=1;
    
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        temp=head;
    }
    else
    {
        temp=head;
        while (i<pos-1 && temp->next)
        {
            i++;
            temp=temp->next;
        }
        if(i==pos-1)
        {
            newNode->next=temp->next;
            temp->next=newNode;
        }
        else
        {
            printf("Please enter correct position\n");
        }
        
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
    insert_at_pos(5,1);
    insert_at_pos(6,2);
    insert_at_pos(1,2);
    insert_at_pos(3,2);
    insert_at_pos(3,3);
    traverse(head);

}