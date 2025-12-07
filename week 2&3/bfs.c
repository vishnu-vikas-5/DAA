#include <stdio.h>

int a[10][10];
int visited[10];
int queue[10];
int front = 0, rear = -1;
int n;

void bfs(int v){
    visited[v] = 1;
    queue[++rear] = v;

    while(front <= rear){
        int cur = queue[front++];
        printf("%d ", cur);

        for(int i = 0; i < n; i++){
            if(a[cur][i] == 1 && !visited[i]){
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main(){
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("BFS: ");
    bfs(start);

    return 0;
}
