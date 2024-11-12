#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Elements of list :%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* insertion(struct node* head,int data, int index)
{
    struct node* ptr = (struct node *)malloc(sizeof(struct node));
    struct node* p = head;

    int i = 0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }

    ptr->data=data;
    ptr->next=p->next;

    p->next=ptr;
    return head;

};

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data=5;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=7;
    third->next=NULL;

    head = insertion(head,4,3);

    traverse(head);

}
