#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node * start = NULL;

struct node * createLl(struct node *);
struct node * displayLl(struct node *);
struct node * insertBeg(struct node *);
struct node * insertEnd(struct node *);
struct node * insertBeforeNode(struct node *);
struct node * insertAfterNode(struct node *);
struct node * deleteFirstNode(struct node *);
struct node * deleteLastNode(struct node *);
struct node * deleteNode(struct node *);
struct node * searchNode(struct node *);


void main(){
    int op=0;
    do{
        printf("1) Create LinkedList\n2) Display Linked List\n3)insert at begining\n");
        printf("4) insert at end\n5)insert before node\n6)insert after node\n7)delete first node\n");
        printf("8)delete last node\n9)delete a node\n10)search node\n-1)top stop\n\n");
        printf("Enter option: ");
        scanf("%d", &op);
        switch (op){
        case 1:
            start = createLl(start);
            break;
        case 2:
            start = displayLl(start);
            break;
        case 3:
            start = insertBeg(start);
            break;
        case 4:
            start = insertEnd(start);
            break;
        case 5:
            start = insertBeforeNode(start);
            break;
        case 6:
            start = insertAfterNode(start);
            break;
        case 7:
            start = deleteFirstNode(start);
            break;
        case 8:
            start = deleteLastNode(start);
            break;
        case 9:
            start = deleteNode(start);
            break;
        case 10:
            start = searchNode(start);
            break;
        }
    }while (op != -1);
        
}
struct node * createLl(struct node * start){
    int data=0;
    printf("Enter data \nto exit -1\n\n");
    scanf("%d", &data);
    while(data != -1){
        struct node * newNode;
        newNode = (struct node *) malloc(sizeof(struct node *));
        newNode -> data = data;
        if(start == NULL){
            start = newNode;
            newNode -> next = NULL;
        }
        else{
            newNode -> next = start;
            start = newNode;
        }
        scanf("%d", &data);
    }
    return start;
    
}
struct node * displayLl(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n\n");
        return NULL;
    }
    int index=0;
    struct node * ptr = start;
    printf("Linked List \n");
    while (ptr != NULL){
        printf("| %d | %d | --> ", ptr->data, index);
        ptr = ptr ->next;
        index++;
    }
    printf("| NULL |\n\n");
    return start;
    
}

struct node * insertBeg(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n");
        return NULL;
    }
    int data;
    printf("Enter number to insert: ");
    scanf("%d", &data);
    struct node * newNode;
    newNode = (struct node *) malloc(sizeof(struct node *));
    newNode -> data =data;
    newNode -> next = start;
    start = newNode;
    printf("%d is inserted to at front\n\n", data);
    return start;
}

struct node * insertEnd(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n");
        return NULL;
    }
    struct node * ptr = start;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    int data;
    printf("Enter number to insert: ");
    scanf("%d", &data);
    struct node * newNode;
    newNode = (struct node *) malloc(sizeof(struct node *));
    newNode -> data = data;
    ptr -> next = newNode;
    newNode -> next = NULL;
    printf("%d inserted at the end\n\n", data);
    return start;

}

struct node * insertBeforeNode(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n");
        return NULL;
    }
    int d,i=0, data;

    struct node * newNode;
    struct node * ptr = start;
    struct node * prePtr=start;
    newNode = (struct node *)malloc(sizeof(struct node *));

    start = displayLl(start);

    printf("Enter index of node: ");
    scanf("%d", &d);

    while(ptr != NULL){
        if(i == d){
            printf("Enter data : ");
            scanf("%d", &data);
            newNode -> data = data;
            newNode -> next = ptr;
            prePtr -> next = newNode;
            printf("%d is inserted before the %d node\n",data, d);
            break;
        }
        prePtr = ptr;
        ptr = ptr -> next;
        i++;    
    }
    if(d>i){
        printf("index out of range\n\n");
    }
    return start;
}

struct node * insertAfterNode(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n");
        return NULL;
    }
    int d,i=0, data;

    struct node * newNode;
    struct node * ptr = start;
    newNode = (struct node *)malloc(sizeof(struct node *));

    start = displayLl(start);

    printf("Enter index of node: ");
    scanf("%d", &d);

    while(ptr != NULL){
        if(i == d){
            printf("Enter data : ");
            scanf("%d", &data);
            newNode -> data = data;
            newNode -> next = ptr -> next;
            ptr -> next = newNode;
            printf("%d is inserted after the %d node\n",data, d);
            break;
        }
        ptr = ptr -> next;
        i++;    
    }
    if(d>i){
        printf("index out of range\n\n");
    }
    return start;   
}
struct node * deleteFirstNode(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n");
        return NULL;
    }
    struct node * ptr = start;
    start = start -> next;
    free(ptr); 
    printf("\nFirst node deleted\n");
    return start;
}
struct node * deleteLastNode(struct node * start){
    if(start == NULL){
        printf("Linked List is empty\n");
        return NULL;
    }

    struct node * ptr = start;
    struct node * prePtr=start;

    while(ptr != NULL){
        if(ptr -> next == NULL){
            prePtr -> next = NULL;
            printf("\nLast node deleted\n");
            free(ptr);
            break;
        }
        prePtr = ptr;
        ptr = ptr -> next;  
    }
    return start;
}
struct node * deleteNode(struct node * start){
    if(start == NULL){
        printf("The linked list empty\n");
        return NULL;
    }
    struct node * ptr= start;
    struct node * prePtr;
    int d,i=0;
    start = displayLl(start);
    printf("Enter index of node: ");
    scanf("%d", &d);
    while(ptr != NULL){
        if(i == d){
            prePtr -> next = ptr -> next;
            free(ptr);
            printf("The %d'th element is removed\n\n", d); 
            break;
        }
        prePtr = ptr;
        ptr = ptr -> next;
        i++;    
    }
    return start;
}

struct node * searchNode(struct node * start){
    if(start == NULL){
        printf("The linked list empty\n");
        return NULL;
    }
    struct node * ptr= start;
    int d,i=0, flag=0;
    start = displayLl(start);
    printf("Enter value of node: ");
    scanf("%d", &d);
    while(ptr != NULL){
        if(ptr -> data == d){
            flag = 1;
            break;
        }
        ptr = ptr -> next;
        i++;    
    }
    if(flag == 1){
        printf("Element found at %d'th index and data = %d\n\n", i, ptr ->data);
    }
    else{
        printf("Element %d not found\n", d);
    }
    return start;
}
