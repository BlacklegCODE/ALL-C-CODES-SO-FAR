#include<stdio.h>

#define SIZE 5

int queue[SIZE];
int rear = -1, front = -1;

int isf()
{
    if(rear == SIZE -1) return 1;
    return 0;
}

int imt()
{
    if(front == SIZE -1 || front > rear) return 1;
    return 0;
}

void enqueue(int value)
{
    if(isf())
    {
        printf("Queue is full !\n");
    }
    else
    {
        if(front == -1)
        rear++;
        queue[rear] = value;
        printf("%d enqueued !\n",value);
    }
}

void dequeue()
{
    if(front = SIZE -1)
    {
        printf("Queue is already empty !\n");
    }
    else
    {
        queue[front] = -1;
        rear=front=-1;
    }
}

void peek()
{
    int value;
    queue[front]= value;
    printf("Top element is %d\n",value);
}

void display()
{
    if(imt())
    {
        printf("Queue is empty !\n");
    }
    else
    {
    printf("Queue elements :\n");
    for(int i = front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
    }
}

int main()
{

    int choice,value;

    while(1)
    {
        printf("Choices \n");
        printf("\n 1.Enqueue\n 2.Dequeue\n 3.Peek\n 4.Display\n 5.Exit\n");
        printf("Enter choice !\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter element to enqueue :\n");
            scanf("%d",&value);
            enqueue(value);
            break;

            case 2: dequeue();
            break;

            case 3: peek();

            case 4: display();

            case 5: return 0;

            defult : printf("Invalid choice !\n");
        }
    }
    return 0;
}






























