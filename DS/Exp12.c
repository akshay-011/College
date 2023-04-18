// Develop programs to perform the various
// traversals in a Binary Search Tree.


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
void preorder(struct node *);
void postorder(struct node *);


void main(){
    int op;
    do{
        printf("\n[1] Insert\n[2] Inorder display\n[3] Preorder display\n[4] post order \n[-1]to exit\n");
        printf("\nEnter option: ");
        scanf("%d", &op);
        switch (op){
        case 1:
            int val;
            printf("Enter value : ");
            scanf("%d", &val);
            root = insertNode(root, val);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
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

void preorder(struct node * r){
    if(r == NULL)
        return ;
    printf("%d ", r -> data);
    preorder(r -> left);
    preorder(r -> right);
    
}

void postorder(struct node * r){
    if(r == NULL)
        return ;
    postorder(r -> left);
    postorder(r -> right);
    printf("%d ", r -> data);
    
}
