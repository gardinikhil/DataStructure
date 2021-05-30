#include <stdio.h>
#define SIZE 5

int front = -1;
int rear = -1;
int queue[SIZE];

int isFull(void)
{
    if(rear==SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(void)
{
    if(front==rear)
    {
        front=rear=-1;
        return 1;
    }
    return 0;
}

void insert(int data)
{
    if(!isFull())
    {
        if(front == -1 && rear == -1)
        {
            front=0;
        }
        rear++;
        queue[rear]=data;
        
    }
    else
    {
        printf("Queue is full\n");
    }
}

void delete()
{
    if(!isEmpty())
    {
        front++;
    }
    else
    {
        printf("Queue is Empty\n");
    }
}

void show()
{
    if(!isEmpty())
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    else
    {
        printf("Queue is Empty");
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    show();
    delete();
    delete();
    show();

    return 0;
}
