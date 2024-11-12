#include<stdio.h>

#define MAX 5

int stack1[MAX], stack2[MAX], stacktemp[MAX];
int top1 = -1, top2 = -1, toptemp = -1;

void push(int stack[],int *top, int value)
{
    if(*top == MAX -1)
    {
        printf("Stack is full !\n");
    }
    else
    {
        *top = *top + 1;
        stack[*top] = value;
    }
}

int pop(int stack[], int *top)
{
    if(*top == -1)
    {
        printf("Stack is empty !\n");
        return -1;
    }
    else
    {
        int value = stack[*top];
        *top = *top - 1;
        return value;
    }
}

void copy()
{
    while(top1 != -1)
    {
        push(stacktemp, &toptemp, pop(stack1, &top1));
    }
    while(toptemp != -1)
    {
        int value = pop(stacktemp, &toptemp);
        push(stack1, &top1, value);
        push(stack2, &top2, value);
    }
}

void display(int stack[],int top)
{
    for(int i = top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main()
{
    int a,b,c,d;

    printf("Enter element 1 :\n");
    scanf("%d",&a);

    printf("Enter element 2 :\n");
    scanf("%d",&b);

    printf("Enter element 3 :\n");
    scanf("%d",&c);

    printf("Enter element 4 :\n");
    scanf("%d",&d);

    push(stack1, &top1,a);
    push(stack1, &top1,b);
    push(stack1, &top1,c);
    push(stack1, &top1,d);

    printf("Stack 1 elements :\n");
    display(stack1, top1);

    copy();

    printf("Stack 2 elements after copying :\n");
    display(stack2, top2);

    return 0;
}
