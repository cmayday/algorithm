#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INFO_TYPE int*
#define INF 1000
#define MAX_VERTEX_NUM 50
#define VER_TYPE char
#define ARC_TYPE int

int visited[MAX_VERTEX_NUM];

// type of graphkind
typedef enum {
    DG, DN, UDG, UDN
} GraphKind;

// cell of adj
typedef struct ArcCell {
    ARC_TYPE adj;
    INFO_TYPE info;
} Adj[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

// adj struct
typedef struct {
    GraphKind kind;
    VER_TYPE vexs[MAX_VERTEX_NUM];
    Adj arcs;
    int vexnum, arcnum;
} Graph;




void CreateGraph(Graph *G);

void CreateDG(Graph *G);

void CreateDN(Graph *G);

void CreateUDG(Graph *G);

void CreateUDN(Graph *G);

void PrintInfo(Graph *G);

void DFS(Graph G, int i);

void BFS(Graph G);
#endif //GRAPH_GRAPH_H
