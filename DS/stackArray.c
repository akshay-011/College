#include<stdio.h>
#include<stdlib.h>

int stack[20], t= -1, m;

void push();
void peek();
void del();
void printStack();
void menu();

void main(){
  printf("Enter limit of stack: ");
  scanf("%d", &m);
  menu();
}
void push(){
  if(t==m-1){
    printf("stack is full\n");
    menu();
  }
  else{
    printf("\nEnter stack: \n");
    for(int i=0;i<m;i++){
        t++;
        scanf("%d", &stack[t]);
    }
    menu();
  }
}
void peek(){
  if(t == -1){
    printf("\nStack empty please add items\n");
    menu();
  }
  else{
    printf("\nPeek element is %d\n", stack[t]);
    t--; 
    menu();   
  }
}
void del(){
  if(t == -1){
    printf("\nStack empty please add items\n");
    menu();
  }
  else{
    t=-1;
    menu();
  }
}
void printStack(){
  if(t==-1){
    printf("\nStack is empty please add items\n");
    menu();
  }
  else{
    printf("The Stack is\n");
    for(int i=0;i<=t;i++){
      printf("%d\t", stack[i]);
    }
    menu();
  }
}
void menu(){
  int op;
  printf("\n\nMENU\n1)push\n2)peek\n3)print\n4)delete\n");
  printf("\nEnter Option: ");
  scanf("%d", &op);
  switch(op){
    case 1:
      push();
      break;
    case 2:
        peek();
        break;
    case 3:
        printStack();
        break;
    case 4:
        del();
        break;
    default:
        printf("Error\n");
        exit(0);
  }
}