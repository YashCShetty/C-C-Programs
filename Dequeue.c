//
// Created by yash on 18/1/23.
//
#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX],front=0,rear=-1;
void insert_front(int item){
    if(front==0&&rear==-1){
        q[++rear]=item;
        return;
    }
    else if(front!=0){
        q[--front]=item;
    }
    else
        printf("Insertion not possible \n");
}
void insert_rear(int item)
{
    if(rear==MAX-1)
        printf("Queue is Full \n");
    else
    {
        q[++rear]=item;
    }

}
void  delete_front(){
    if(front>rear) {
        printf("Queue is empty \n");
    }
    else
    {
        int p=q[front++];
        printf("The item deleted is %d",p);
    }

}
void  delete_rear(){
    if(front>rear) {
        printf("Queue is empty \n");
    }
    else
    {
        int item=q[rear--];
        if(front>rear)
        {
            front=0;
            rear=-1;
        }
        printf("The item deleted is %d",item);
    }

}
void display()
{
    if(front>rear)
        printf("Queue is empty");
    else
    {
        printf("The contents of the queue are \n");
        for(int i=front;i<=rear;i++){
            printf("%d \n",q[i]);
        }

    }

}

int main() {
    int ch;
    while (1) {
        printf("1.Insert from rear 2.Insert from front \n"
               " 3.Delete from rear 4.Delete from front 5.Display \n");
        printf("Enter ur choice \n");
        scanf("%d", &ch);
        int item;
        switch (ch) {
            case 1:
                printf("Enter item to be inserted \n");
                scanf("%d", &item);
                insert_rear(item);
                break;
            case 2:
                printf("Enter item to be inserted \n");
                scanf("%d", &item);
                insert_front(item);
                break;
            case 3:
                delete_rear();
                break;
            case 4:
                delete_front();
                break;
            case 5:
                display();
                break;
            default:
                printf("Enter valid choice \n");
                exit(0);

        }


    }
}