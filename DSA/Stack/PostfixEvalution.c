#include<stdio.h>
#include <stdlib.h>
#define SIZE 20


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

int main(int argc, char const *argv[])
{
    printf("Enter Expression:");
    char exp[SIZE];
    scanf("%s",&exp);
    int len = strlen(exp);
    int num1=0,num2=0;
    for(int i=0;i<len;i++)
    {
       switch(exp[i])
       {
           case '+':
                num1=pop();
                num2=pop();
                push(num1+num2);
                break;
           case '-':
                num1=pop();
                num2=pop();
                push(num2-num1);
                break;
            case '*':
                num1=pop();
                num2=pop();
                push(num1*num2);
                break;
            case '/':
                num1=pop();
                num2=pop();
                push(num2/num1);
                break;
            default:
                push(exp[i]-'0');
       }
    }
    printf("%d\n",stack[top]);
    return 0;
}