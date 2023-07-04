#include<stdio.h>

int top =-1 , stack[100], max;

void push(int);
void pop();
void peek();
void display();

void main(){
    printf("Enter max : ");
    scanf("%d", &max);
    int op, val;
    do{
        printf("1)push\n2)pop\n3)peek\n4)display\n-1)exit\n");
        scanf("%d", &op);
        switch (op){
        case 1 :
            printf("Enter data : ");
            scanf("%d", &val);
            push(val);
            break;
        case 2 :
            pop();
            break;
        case 3 :
            peek();
            break;
        case 4 :
            display();
            break;
        }

    } while (op != -1);
    
}

void push(int data){
    if(top == max-1)
        printf("Stack overflow\n");
    else{
        top++;
        stack[top] = data;
    }
}
void pop(){
    if(top == -1)
        printf("Stack underflow\n");
    else{
        printf("Value deleted : %d\n", stack[top]);
        top--;
    }
}
void peek(){
    if(top == -1)
        printf("Stack underflow\n");
    else{
        printf("Peek Value : %d\n", stack[top]);
    }
}

void display(){
    if(top == -1)
        printf("Stack underflow\n");
    else{
        printf("Stack is \n");
        for(int i = 0 ; i <= top ; i++){
            printf("%d   ", stack[i]);
        }
        printf("\n");
    }
}
