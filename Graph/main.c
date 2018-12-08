#include <stdio.h>
#include "graph.h"

int main() {
    Graph G;
    CreateGraph(&G);
    PrintInfo(&G);
    BFS(G);
    DFS(G, 0);
}