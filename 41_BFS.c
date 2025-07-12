#include <stdio.h>

#define MAX 100

int main()
{
    int n, i, j, start;
    int adj[MAX][MAX];      // Adjacency matrix
    int visited[MAX] = {0}; // Visited array
    int queue[MAX];         // Queue for BFS
    int front = 0, rear = 0;

    // Input number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Input adjacency matrix
    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    // Input starting vertex
    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    // Initialize BFS
    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS Traversal: ");

    while (front < rear)
    {
        int current = queue[front++]; // Dequeue
        printf("%d ", current);

        // Visit all adjacent vertices
        for (j = 0; j < n; j++)
        {
            if (adj[current][j] == 1 && visited[j] == 0)
            {
                queue[rear++] = j;
                visited[j] = 1;
            }
        }
    }

    printf("\n");
    return 0;
}
