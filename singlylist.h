#ifdef SINGLYLIST_H
#define SINGLYLIST_H
#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node * next;
    struct node * prev;
    int data;
};

struct node *f;

void create()
{
    int n,i;
    struct node *s;
    printf("Enter number of nodes needed :\n");
    scanf("%d",&n);

    f = (struct node*)malloc(sizeof(struct node));
    printf("Enter data :\n");
    scanf("%d",&f->data);
    f->prev = NULL;

    for(i = 1; i<n;i++)
    {
        s->next=(struct node*)malloc(sizeof(struct node));
        s=s->next;
        printf("Enter data :\n");
        scanf("%d",&s->data);
    }
    s->next = NULL;
}

void display()
{
    struct node *s;
    for(s=f;s!=NULL;s=s->next)
    {
        printf("%d -> ",s->data);
    }
}
#endif // SINGLYLIST_H
