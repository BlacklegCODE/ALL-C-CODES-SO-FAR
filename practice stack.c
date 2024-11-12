#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX -1)
    {
        printf("Stack overflow !\n");
        return;
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed !\n",value);
    }
}

int pop()
{
    if (top == -1)
    {

        printf("Stack undeflow !\n");
        return -1;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty !\n");
    }
    else
    {
        printf("Stack elements :\n");
        for(int i = top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int a,b,c,d,e,f,g,h,i,j;

    printf("Enter first element :\n");
    scanf("%d",&b);
    printf("Enter second element :\n");
    scanf("%d",&d);
    printf("Enter third element :\n");
    scanf("%d",&f);
    printf("Enter fourth element :\n");
    scanf("%d",&h);

    push(b);
    push(d);
    push(f);
    push(h);

    display();

    int popval = pop();
    if(popval != -1)
    {
        printf("%d popped from stackc !\n",popval);
    }
    display();

    return 0;
}
