#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void traverse(struct node * ptr)
{
    struct node * head = ptr;
    {
       do{
        printf("List elements :%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=NULL);
  }
}

void listrav(struct node * head)
{
    struct node * ptr = head;


    do{
        printf("Elements is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct node * insertfirst(struct node * head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;

     struct node * p = head;
     while(p->next!= head)
     {
         p=p->next;
     }
     p->next = ptr;
     ptr->next = head;
     head = ptr;
     return head;


};

int main()
{
    struct node * head;
    struct node * second;
    struct node * third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 3;
    head->next = second;

    second->data = 4;
    second->next = third;

    third ->data = 5;
    third->next = head;

    traverse(head);
    printf("\n\n");
    listrav(head);
    printf("\n\n");
    head = insertfirst(head,8);
    traverse(head);



    return 0;

}
