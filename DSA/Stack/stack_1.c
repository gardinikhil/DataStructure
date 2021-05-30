#include<stdio.h>
#include <stdlib.h>
#define SIZE 10


//const int SIZE = 10;
int top = -1;
int stack[10];

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int isFull()
{
    if(top == SIZE-1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void push(int ele)
{
    if(isFull() != 1)
    {
        top++;
        stack[top] = ele;
    }
    else
    {
        printf("Stack is full!!!\n");
    }
}

int pop()
{
    int ele;
    if(isEmpty() != 1)
    {
        ele = stack[top];
        top--;
        return ele;
    }
    else
    {
        printf("stack is empty!!!!\n");
        return 0;
    }
    
}

void show()
{
     if(isEmpty() != 1)
    {
        printf("Stack (bottom to top): ");
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
    else
    {
        printf("Stack is empty!!!");
    }
    printf("\n");
}

int main()
{
    int data,choice;
    char permi;
    do
    {
        printf("1.push\n2.pop\n3.show\n4.exit\nYour choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push:");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            data=pop();
            if(data !=0)
                printf("Data pop:%d\n",data);
            break;
        case 3:
            show();
            break;
        case 4:
            printf("Thank You");
            exit(0);
        
        default:
            printf("You enter wrong choice!!!\n");
        }
        printf("Do you want to continue(y or n):");
        scanf("%s",&permi);
    } while (permi == 'y' || permi == 'Y');
    
}
