#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

struct node * displayQueue(struct node *);
struct node * insert(struct node *, int);
struct node * delete();

void main(){
	int op,val;
	do{
		printf("\nMENU\n1)INSERT\n2)print\n3)DELETE\n\n");
		printf("\nEnter Option: ");
		scanf("%d", &op);
	  	switch(op){
			case 1:
                printf("Enter data: ");
                scanf("%d", &val);
		  		front = insert(front, val);
		  		break;
			case 2:
		    	front = displayQueue(front);
		    	break;
			case 3:
		    	rear = delete(rear);
		    	break;
	   		default:
		    	printf("Error\n");
		    	exit(0);
		 }
  	}while(op <= 4);
}
struct node * insert(struct node * top, int data){
    struct node* newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
    return front;
}

struct node * displayQueue(struct node * top){
	 if(front == NULL){
        printf("The  queue is empty\n\n");
        return NULL;
    }
    struct node * ptr = top;
    printf("Linked List \n");
    while (ptr != NULL){
        printf("| %d  | --> ", ptr->data);
        ptr = ptr ->next;
    }
    printf("| NULL |\n\n");
    return front;
 	
}
struct node * delete(){
    if (front == NULL) {
        return NULL;
    }

    struct node* temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}
