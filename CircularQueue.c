//
// Created by yash on 18/1/23.
//
#include<stdio.h>
#include <stdlib.h>

#define MAX 3
int a[MAX] ,count=0,front=0,rear=-1;
void insert_rear(int item){
    if(count==MAX-1)
    {
        printf("CIrcular Queue is full");

    }
    else
    {
        rear=(rear+1)%MAX;
        a[rear]=item;
        count++;
    }
}
void delete_front(){
    if(count==0){
        printf("Circular Queue is Empty");
    }
    else
    {
        int item;
        item=a[front];
        printf("\n %d",a[0]);
        front=(front+1)%MAX;
        count--;
        printf("\n %d",front);
        printf("Item deleted is %d",item);
    }
}
void display(){
    if(count==0){
        printf("The contents of the queue are empty \n");
    }
    else {
        printf("The contents of the queue are \n");
        for (int i=1,f=front;i <=count; i++) {
            printf("%d ",a[f]);
            f=(f+1)%MAX;
        }
    }

}
void main() {
    int ch;
    printf("Welcome to circular queue data structure");
    while (1) {
        printf("\n 1.Insert from rear\n""2.Delete from front\n""3.Display\n");
        printf("Enter ur choice\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the element to be inserted \n");
                int item;
                scanf("%d", &item);
                insert_rear(item);
                break;
            case 2:
                delete_front();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);

        }
    }
}