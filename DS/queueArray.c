#include<stdio.h>
#define m 30

// Implement Queue using array.

int queue[m],front=-1, rear = -1;

void pop();
void push();
void peek();
void delete();
void printQueue();

void main(){
    int op;
    do{
        printf("\nMENU\n");
        printf("1)Insert\n2)Pop\n3)peek\n4)delete\n5)print\n");
        printf("\nEnter option: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                delete();
                break;
            case 5:
                printQueue();
                break;
            default:
                printf("Error\n");
                     
        }
        
    }while(op < 6);
}

void push(){
    if(rear == m-1){
        printf("Overflow\n");
    }
    else{
        int n;
        printf("Enter number: ");
        scanf("%d", &n);
        if(front == -1 && rear == -1){
            front = rear = 0;
        }
        else{
            rear++;
        }
        queue[rear] = n;
    }

}

void pop(){
    if(front > rear){
        printf("Queue is Empty like your head\n");
    }
    else{
        printf("The poped element is %d\n", queue[front]);
        front++;
    }
}
void peek(){
    if(rear == -1){
        printf("\nQueue is Empty\n");
    }
    else{
        printf("\nFirst element is %d\n", queue[front]);
    }
}
void delete(){
    if(front == -1){
        printf("\nQueue is Empty\n");
    }
    else{
        front = rear = -1;
    }
}

void printQueue(){
    if(front > rear){
        printf("\nQueue is empty\n");
    }
    else{
        printf("\nThe Queue is\n");
        for(int i = front;i <= rear;i++){
            printf("%d  ", queue[i]);
        }
        printf("\n");
    }
}
