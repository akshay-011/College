// Construct Stack using Linked List.

#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;

struct node * displayStack(struct node *);
struct node * push(struct node *);
struct node * pop(struct node *);

void main(){
	int op;
	do{
		printf("\nMENU\n1)push\n2)print\n3)pop\n\n");
		printf("\nEnter Option: ");
		scanf("%d", &op);
	  	switch(op){
			case 1:
		  		top = push(top);
		  		break;
			case 2:
		    	top = displayStack(top);
		    	break;
			case 3:
		    	top = pop(top);
		    	break;
	   		default:
		    	printf("Error\n");
		    	exit(0);
		 }
  	}while(op <= 4);
}
struct node * push(struct node * top){
    int data;
    printf("Enter number to insert: ");
    scanf("%d", &data);
    struct node * newNode;
    newNode = (struct node *) malloc(sizeof(struct node *));
    newNode -> data = data;
    if (top == NULL){
    	top = newNode;
    	newNode -> next = NULL;
    }
    else{
    	newNode -> next = top;
    	top = newNode;
    }
    printf("%d pushed to stack\n\n", data);
    return top;
}

struct node * displayStack(struct node * top){
	 if(top == NULL){
        printf("The  Stack is empty\n\n");
        return NULL;
    }
    struct node * ptr = top;
    printf("Linked List \n");
    while (ptr != NULL){
        printf("| %d  | --> ", ptr->data);
        ptr = ptr ->next;
    }
    printf("| NULL |\n\n");
    return top;
 	
}
struct node * pop(struct node * top){
    if(top == NULL){
        printf("The Stack is empty\n");
        return NULL;
    }
    struct node * ptr = top;
    top = top -> next;
    printf("\n%d is poped\n", ptr -> data);
    free(ptr); 
    return top;
}
