#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1,rear= -1;

int isf()
{
    if(rear == SIZE -1)
    {
        printf("This queue is full !\n");
    }
    else
    {
        printf("Queue is empty !\n");
    }
}

int ise()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is empty !\n");
    }
    else
    {
        printf("Queue is full !\n");
    }
}

void enqueue(int value)
{
    if(isf())
    {
        printf("Queue is full !\n");
    }
    else
    {
        if(front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n",value);
    }
}

void display()
{
    for(int i = front;i <= rear; i++)
    printf("%d ",queue[i]);
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("Enter value :\n");
        scanf("%d",&value);

        enqueue(value);
        display();
    }
    return 0;
}
