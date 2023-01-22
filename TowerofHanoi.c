//
// Created by yash on 22/1/23.
//
#include<stdio.h>
void tower_of_hanoi(int n, char pegA,char pegB,char pegC){
    if(n==1)
    {
        printf("Move disk 1 from %c to %c \n",pegA,pegB );
    }
    else
    {
        tower_of_hanoi(n-1,pegA,pegC,pegB);
        printf("Move disk %d from peg %c to peg %c\n",n,pegA,pegB);
        tower_of_hanoi(n-1,pegC,pegB,pegA);

    }
}
void main()
{
    int n;
    printf("Enter the no of disks \n");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');

}