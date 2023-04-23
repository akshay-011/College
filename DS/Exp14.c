#include <stdio.h>
#include <stdlib.h>


struct node {
    int value;
    struct node* next;
};


struct graph {
    int numVertices;
    struct node** adjLists;
};

struct node *createnode(int );
struct graph *creategraph(int);
void addEdge(struct graph *, int , int );
void DFS(struct graph* , int , int* );
void BFS(struct graph *, int , int *);



void main() {
    struct graph* graph = creategraph(5);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    int visited[5] = {0};
    printf("DFS traversal: ");
    DFS(graph, 0, visited);

    printf("\nBFS traversal: ");
    for (int i = 0; i < 5; i++) {
        visited[i] = 0;
    }
    BFS(graph, 0, visited);

}
struct node *createnode(int value)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->value = value;
    newnode->next = NULL;
    return newnode;
}

struct graph* creategraph(int numVertices) {
    struct graph* graph = malloc(sizeof(struct graph));
    graph->numVertices = numVertices;
    graph->adjLists = malloc(numVertices * sizeof(struct node*));
    for (int i = 0; i < numVertices; i++) {
        graph->adjLists[i] = NULL;
    }
    return graph;
}

void addEdge(struct graph* graph, int src, int dest) {

    struct node* newnode = createnode(dest);
    newnode->next = graph->adjLists[src];
    graph->adjLists[src] = newnode;

}


void DFS(struct graph* graph, int vertex, int* visited) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    struct node* adjList = graph->adjLists[vertex];
    while (adjList != NULL) {
        int connectedVertex = adjList->value;
        if (visited[connectedVertex] == 0) {
            DFS(graph, connectedVertex, visited);
        }
        adjList = adjList->next;
    }
}

void BFS(struct graph* graph, int vertex, int* visited) {
    int queue[graph->numVertices];
    int front = 0, rear = 0;
    visited[vertex] = 1;
    queue[rear] = vertex;
    rear++;
    while (front < rear) {
        int currentVertex = queue[front];
        printf("%d ", currentVertex);
        front++;
        struct node* adjList = graph->adjLists[currentVertex];
        while (adjList != NULL) {
            int connectedVertex = adjList->value;
            if (visited[connectedVertex] == 0) {
                visited[connectedVertex] = 1;
                queue[rear] = connectedVertex;
                rear++;
            }
            adjList = adjList->next;
        }
    }
}
