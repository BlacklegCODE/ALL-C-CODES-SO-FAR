#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX -1)
    {
        printf("Stack overflow ! Unable to push !\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d Pushed !\n",value);
    }
}

int pop()
{
    if(top == -1)
    {
        printf("Stack underflow !\n");
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
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int a,b,c,d;

    printf("Enter first element :\n");
    scanf("%d",a);
    printf("Enter second element :\n");
    scanf("%d",b);
    printf("Enter third element :\n");
    scanf("%d",c);
    printf("Enter fourth element :\n");
    scanf("%d",d);

    push(a);
    push(b);
    push(c);
    push(d);

    display();

    int popval = pop();
    if(popval != -1)
    {
        printf("%d popped from the stack !\n",popval);
    }
    display();
    return 0;
}
