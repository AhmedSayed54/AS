#include <stdio.h>
#include <stdlib.h>
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void createq();
int stack1[100], stack2[100];
int top1 = -1, top2 = -1;
int count = 0;
void main(){
    int choice;
    do{
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice ?");
        scanf("%d",& choice);
        printf("%d", choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nPlease enter a valid choice.\n");
        }
    }while(choice != 4);
}
void createq(){
    top1 = top2 = -1;
}
void push1(int data){
    stack1[++top1] = data;
}
int pop1(){
    return(stack1[top1--]);
}
void push2(int data){
    stack2[++top2] = data;
}
int pop2(){
    return(stack2[top2--]);
}
void enqueue(){
    int data, i;
    printf("Enter data into queue");
    scanf("%d", &data);
    push1(data);
    count++;
}
void dequeue(){
    int i;
    for (i = 0;i <= count;i++){
        push2(pop1());
    }
    pop2();
    count--;
    for (i = 0;i <= count;i++){
        push1(pop2());
    }
}
void display(){
    int i;
    for (i = 0;i <= top1;i++){
        printf(" %d ", stack1[i]);
    }
}
