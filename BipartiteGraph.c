#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct Graph {
    int numVertices;
    Node** adjLists;
} Graph;

int isBipartite(Graph* graph, int src) {
    int color[MAX_NODES];
    for (int i = 0; i < MAX_NODES; i++) color[i] = -1; // Initialize to -1

    int queue[MAX_NODES], front = 0, rear = 0;

    color[src] = 0;
    queue[rear++] = src;

    while (front < rear) {
        int u = queue[front++];
        Node* temp = graph->adjLists[u];

        while (temp) {
            if (color[temp->val] == -1) {
                color[temp->val] = 1 - color[u];
                queue[rear++] = temp->val;
            } else if (color[temp->val] == color[u]) {
                return 0; // Conflict detected
            }
            temp = temp->next;
        }
    }
    return 1;
}

int main(void) {
    printf("Graph bipartiteness check function compiled successfully!\n");
    return 0;
}
