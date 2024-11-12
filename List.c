#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct node
{
    struct node * next;
    struct node * prev;
    int data;
};

struct node * createnode(int data)
{
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
};
