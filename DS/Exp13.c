// Develop programs to perform deletion of a
// node in a Binary Search Tree.

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
struct node * deleteNode(struct node * , int);
struct node * minValueNode(struct node *);

void inorder(struct node *);


void main(){
    int op, val,d;
    do{
        printf("\n[1] Insert\n[2]display BST\n[3]delete node\n[-1]to exit\n");
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

        case 3:
            printf("Enter data to delete : ");
            scanf("%d", &d);
            root = deleteNode(root, d);
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

struct node * deleteNode(struct node * root, int val){
    if (root == NULL)
        return root;
    
    if (val < root-> data)
        root->left = deleteNode(root->left, val);

    else if (val > root->data)
        root->right = deleteNode(root->right, val);
    else {
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

struct node* minValueNode(struct node* node) {
    struct node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}
