// Create a Binary Search Tree using Linked List.
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * root = NULL;

struct node * getNode(int);
struct node * insertNode(struct node * , int);

void inorder(struct node *);


void main(){
    int op, val;
    do{
        printf("\n[1] Insert\n[2]display BST\n[-1]to exit\n");
        printf("\nEnter option: ");
        scanf("%d", &op);
        switch (op){
        case 1:
            printf("Enter value : ");
            scanf("%d", &val);
            root = insertNode(root, val);
            break;
        case 2:
            inorder(root);
            break;
        default:
            break;
        }     

    }while(op != -1);
}

struct node * insertNode(struct node * parent, int val){
    if(parent == NULL){
        parent = getNode(val);
    }
    else if(val >= parent -> data){
        parent -> right = insertNode(parent -> right, val);
    }
    else if(val <= parent -> data){
        parent -> left = insertNode(parent -> left, val);
    }
    return parent;
}

struct node * getNode(int val){
    struct node * newNode;
    newNode = (struct node *) malloc(sizeof(struct node *));
    newNode ->left = NULL;
    newNode -> right = NULL;
    newNode -> data = val;
    return newNode;
}

void inorder(struct node * r){
    if(r == NULL){
        return ;
    }
    inorder(r -> left);
    printf("%d ", r -> data);
    inorder(r -> right);
}
