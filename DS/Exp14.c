#include <stdio.h>

#define MAX_NODES 100

int graph[MAX_NODES][MAX_NODES]; 

int visited[MAX_NODES];

void bfs(int, int);
void dfs(int, int);


void main() {
    int nodes, edges, i, j, x, y;

    printf("Enter number of nodes: ");
    scanf("%d", &nodes);

    printf("Enter number of edges: ");
    scanf("%d", &edges);
   
    for (i = 0; i < nodes; i++) {
        for (j = 0; j < nodes; j++) {
            graph[i][j] = 0;
        }
    }

  
    for (i = 0; i < edges; i++) {
        printf("Enter edge %d: ", i+1);
        scanf("%d %d", &x, &y);

        graph[x][y] = 1;
        graph[y][x] = 1; 
    }

    
    printf("Adjacency matrix:\n");
    for (i = 0; i < nodes; i++) {
        for (j = 0; j < nodes; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    printf("BFS of graph \n");
    bfs(0, nodes);
    
    for (i = 0; i < nodes; i++) {
        visited[i] = 0;
    }
    
    printf("\nDFS of graph \n");
    dfs(0, nodes);
    
    

}


void bfs(int start, int nodes) {
    int queue[MAX_NODES], front = -1, rear = -1;
    int i, curr;

    queue[++rear] = start;

    visited[start] = 1;

    while (front != rear) {
        curr = queue[++front];

        printf("%d ", curr);

        for (i = 0; i < nodes; i++) {
            if (graph[curr][i] && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}


void dfs(int curr, int nodes) {
    int i;

    printf("%d ", curr);

    visited[curr] = 1;

    for (i = 0; i < nodes; i++) {
        if (graph[curr][i] && !visited[i]) {
            dfs(i, nodes);
        }
    }
}

