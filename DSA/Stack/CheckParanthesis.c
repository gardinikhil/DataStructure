#include<stdio.h>
#include <stdlib.h>
#define SIZE 20


//const int SIZE = 10;
int top = -1;
char stack[SIZE];

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
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
        return 0;
    }
}

void push(char ele)
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

char pop()
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

char peek()
{
    return stack[top];
}
int main(int argc, char const *argv[])
{
    char exp[20];
    int count=0;
    printf("Enter expression:");
    gets(exp);
    //scanf("%s",&exp);
    int length=strlen(exp);
    for(int i=0;i<length;i++)
    {
        if(!(isEmpty()))
        {
            switch(exp[i])
            {
                case ')':
                    if(peek()=='(')
                    {
                        pop();
                        count--;
                    }
                    break;
                case '}':
                    if(peek()=='{')
                    {
                        pop();
                        count--;
                    }
                    break;
                case ']':
                    if(peek()=='[')
                    {
                        pop();
                        count--;
                    }
                    break;
                default:
                    push(exp[i]);
                    count++;
            }
        }
        else
        {
            push(exp[i]);
            count++;
        }
    }
    //printf("%d\n",count);
    if(count==0)
    {
        printf("Valid Expression\n");
    }
    else
    {
        printf("Invalid Expression\n");
    }
    return 0;
}
