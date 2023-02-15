//
// Created by yash on 13/2/23.
//
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
int info;
struct node *link;
};
typedef struct node *NODE;
struct queue{
    NODE rear;
    NODE front;
};
typedef struct queue *Queue;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return  x;
}
void enqueue(int item,Queue q)
{;
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    temp=getnode();
    if(q->rear=NULL)
    {
   temp->info=item;
   temp->link=NULL;
   q->front=q->rear=temp;
   return ;
    }
    else
    {
        temp->info=item;
        temp->link=NULL;
        q->rear->link=temp;
        q->rear=temp;
    }
}
void display(Queue q) {
    if (q->front == NULL)
        printf("Queue is empty \n");
    NODE temp = q->front;
    while (temp != NULL) {
        printf("%d", temp->info);
    }
}
void main()
{
    Queue q;
    q->front=q->rear=NULL;
    enqueue(2,q);
    display(q);
}