//
// Created by yash on 20/1/23.
//
#include<stdio.h>
#include <malloc.h>
#include <stdlib.h>

int stacksize=1;
int top=-1;
int *s;
void push(int item){
    if(top==stacksize-1){
        printf("Stack Full,needs to be increased\n");
        printf("Enter the value by which the stack is to be increased \n");
        int n;
        scanf("%d",&n);
        stacksize=stacksize+n;
        s=(int*)realloc(s,stacksize*sizeof(int));
    }
    s[++top]=item;
    printf("Top value is %d",top);
    printf("Stacksize value is %d",stacksize);
}
int pop()
{
    if(top==-1){
        printf("Stack Underflow");
        return -1;
    }
    printf("Stack size decreased by 1");
    printf("Item deleted is %d",s[top--]);
    stacksize--;
    s=(int*)realloc(s,stacksize*sizeof(int));
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d \t",s[i]);
    }
}
void main()
{
    int item,ch;
    s=(int*)malloc(stacksize*sizeof(int));
    while(1) {
        printf("\nWelcome to stacks using dynamic array \n");
        printf("1.Push \n2.Pop 3.Display 4.Exit \n ");
        scanf("%d",&ch);
        switch(ch)
         {
            case 1:
            printf("Enter the item to be inserted \n");
            scanf("%d", &item);
            push(item);
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
}