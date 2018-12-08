//
// Created by cyc on 18-12-8.
//

#include "graph.h"


int find(VER_TYPE target, Graph *G) {
    for (int i = 0; i < G->vexnum; ++i) {
        if (target == G->vexs[i])
            return i;
    }
    return -1;
}

void CreateDN(Graph *G) {
    printf("Input:vexnum\n");
    scanf("%d", &G->vexnum);
    getchar();

    printf("Input:arcnum\n");
    scanf("%d", &G->arcnum);
    getchar();

    //Init vertexs
    for (int i = 0; i < G->vexnum; i++) {
        printf("Input vertex%d:\n", i + 1);
        scanf("%c", &G->vexs[i]);
        getchar();//recive enter
        printf("saved: %c\n", G->vexs[i]);
    }
    //构造顶点向量
    printf("All vexnums: ");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%c  ", G->vexs[i]);
    }

    //初始化零接矩阵
    for (int i = 0; i < G->vexnum; ++i) {
        for (int j = 0; j < G->vexnum; ++j) {
            if (i != j) {
                G->arcs[i][j].adj = INF;
                G->arcs[i][j].info = NULL;
            } else {
                G->arcs[i][j].adj = 0;
                G->arcs[i][j].info = NULL;
            }
        }
    }
    printf("Input arcs:\n");
    for (int k = 0; k < G->arcnum; ++k) {
        int i, j, weight;
        char v1, v2;
        printf("Input:V_Ori V_Des WEIGHT\n");
        scanf("%c %c %d", &v1, &v2, &weight);
        printf("%c -> %c: %d\n", v1, v2, weight);
        getchar();
        i = find(v1, G);
        j = find(v2, G);
        G->arcs[i][j].adj = weight;
        G->arcs[j][i].adj = weight;
    }
}

void CreateUDN(Graph *G) {
    printf("Input:vexnum\n");
    scanf("%d", &G->vexnum);
    getchar();

    printf("Input:arcnum\n");
    scanf("%d", &G->arcnum);
    getchar();

    //Init vertexs
    for (int i = 0; i < G->vexnum; i++) {
        printf("Input vertex%d:\n", i + 1);
        scanf("%c", &G->vexs[i]);
        getchar();//recive enter
        printf("saved: %c\n", G->vexs[i]);
    }
    printf("All vexnums: ");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%c  ", G->vexs[i]);
    }
    printf("\n");


    //初始化零接矩阵
    for (int i = 0; i < G->vexnum; ++i) {
        for (int j = 0; j < G->vexnum; ++j) {
            if (i != j) {
                G->arcs[i][j].adj = INF;
                G->arcs[i][j].info = NULL;
            } else {
                G->arcs[i][j].adj = 0;
                G->arcs[i][j].info = NULL;
            }
        }
    }

    printf("Input arcs:\n");
    for (int k = 0; k < G->arcnum; ++k) {
        int i, j, weight;
        char v1, v2;

        printf("Input:V_Ori V_Des WEIGHT\n");
        scanf("%c %c %d", &v1, &v2, &weight);
        printf("%c -> %c weight: %d\n", v1, v2, weight);
        getchar();
        i = find(v1, G);
        j = find(v2, G);
        G->arcs[i][j].adj = weight;
    }
}


void CreateDG(Graph *G) {
    printf("Input:vexnum\n");
    scanf("%d", &G->vexnum);
    getchar();

    printf("Input:arcnum\n");
    scanf("%d", &G->arcnum);
    getchar();

    //Init vertexs
    for (int i = 0; i < G->vexnum; i++) {
        printf("Input vertex%d:\n", i + 1);
        scanf("%c", &G->vexs[i]);
        getchar();//recive enter
        printf("saved: %c\n", G->vexs[i]);
    }
    printf("All vexnums: ");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%c  ", G->vexs[i]);
    }
    printf("\n");


    //初始化零接矩阵
    for (int i = 0; i < G->vexnum; ++i) {
        for (int j = 0; j < G->vexnum; ++j) {
            if (i != j) {
                G->arcs[i][j].adj = INF;
                G->arcs[i][j].info = NULL;
            } else {
                G->arcs[i][j].adj = 0;
                G->arcs[i][j].info = NULL;
            }
        }
    }

    printf("Input arcs:\n");
    for (int k = 0; k < G->arcnum; ++k) {
        int i, j;
        char v1, v2;
        printf("Input:V_Ori V_Des\n");
        scanf("%c %c", &v1, &v2);
        printf("%c -> %c\n", v1, v2);
        getchar();//receive enter
        i = find(v1, G);
        j = find(v2, G);
        G->arcs[i][j].adj = 1;
    }
}


void CreateUDG(Graph *G) {
    printf("Input:vexnum\n");
    scanf("%d", &G->vexnum);
    getchar();

    printf("Input:arcnum\n");
    scanf("%d", &G->arcnum);
    getchar();

    //Init vertexs
    for (int i = 0; i < G->vexnum; i++) {
        printf("Input vertex%d:\n", i + 1);
        scanf("%c", &G->vexs[i]);
        getchar();//recive enter
        printf("saved: %c\n", G->vexs[i]);
    }
    printf("All vexnums: ");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%c  ", G->vexs[i]);
    }
    printf("\n");


    //Init AjdMat
    for (int i = 0; i < G->vexnum; ++i) {
        for (int j = 0; j < G->vexnum; ++j) {
            if (i != j) {
                G->arcs[i][j].adj = INF;
                G->arcs[i][j].info = NULL;
            } else {
                G->arcs[i][j].adj = 0;
                G->arcs[i][j].info = NULL;
            }
        }
    }

    //INput arcs
    printf("Input arcs:\n");
    for (int k = 0; k < G->arcnum; ++k) {
        int i, j;
        char v1, v2;
        printf("Input:V_Ori V_Des\n");
        scanf("%c %c", &v1, &v2);
        printf("%c -> %c\n", v1, v2);
        getchar();//receive enter
        i = find(v1, G);
        j = find(v2, G);
        G->arcs[i][j].adj = 1;
        G->arcs[j][i].adj = 1;
    }
}

void CreateGraph(Graph *G) {
    char save[20];
    printf("Input kind of graph\n"
           ">>DN UDN DG UDG\n");
    scanf("%s", save);
    if (strcmp(save, "DN") == 0) {
        printf("sss1\n");
        G->kind = DN;
        CreateDN(G);
    } else if (strcmp(save, "UDN") == 0) {
        printf("sss2\n");
        G->kind = UDN;
        CreateUDN(G);
    } else if (strcmp(save, "DG") == 0) {
        printf("sss\n");
        G->kind = DG;
        CreateDG(G);
    } else if (strcmp(save, "UDG") == 0) {
        printf("sss\n");
        G->kind = UDG;
        CreateUDG(G);
    } else {
        printf("Type Error");
    }
}

void PrintInfo(Graph *G) {
    switch (G->kind) {
        case UDN:
            printf(">> UDN\n");
            break;
        case DN:
            printf(">> UDN\n");
            break;
        case UDG:
            printf(">> UDN\n");
            break;
        case DG:
            printf(">> UDN\n");
            break;
    }
    printf(">> %d vertexs \n", G->vexnum);
    printf(">> vertex list: ");
    for (int i = 0; i < G->vexnum; i++) {
        printf("%c  ", G->vexs[i]);
    }
    printf("\n");
    for (int i = 0; i < G->vexnum; ++i) {
        for (int j = 0; j < G->vexnum; ++j) {
            printf("%5d  ", G->arcs[i][j].adj);
        }
        printf("\n");
    }
}

static int first_vertex(Graph G, int v)
{
    int i;

    if (v<0 || v>(G.vexnum-1))
        return -1;

    for (i = 0; i < G.vexnum; i++)
        if (G.arcs[v][i].adj >= 1)
            return i;

    return -1;
}

static int next_vertix(Graph G, int v, int w)
{
    int i;

    if (v<0 || v>(G.vexnum-1) || w<0 || w>(G.vexnum-1))
        return -1;

    for (i = w + 1; i < G.vexnum; i++)
        if (G.arcs[v][i].adj >= 1)
            return i;

    return -1;
}

void DFS(Graph G, int i)
{
    int w;

    visited[i] = 1;
    printf("%c ", G.vexs[i]);
    // 遍历该顶点的所有邻接顶点。若是没有访问过，那么继续往下走
    for (w = first_vertex(G, i); w >= 0; w = next_vertix(G, i, w))
    {
        if (!visited[w])
            DFS(G, w);
    }

}

/*
 * 深度优先搜索遍历图
 */
void DFSTraverse(Graph G)
{
    int i;     // 顶点访问标记

    for (i = 0; i < G.vexnum; i++)
        visited[i] = 0;

    printf("DFS: ");
    for (i = 0; i < G.vexnum; i++)
    {
        //printf("\n== LOOP(%d)\n", i);
        if (!visited[i])
            DFS(G, i);
    }
    printf("\n");
}

void BFS(Graph G)
{
    int head = 0;
    int rear = 0;
    int queue[MAX_VERTEX_NUM];     // 辅组队列
    int visited[MAX_VERTEX_NUM];   // 顶点访问标记
    int i, j, k;

    for (i = 0; i < G.vexnum; i++)
        visited[i] = 0;

    printf("BFS: ");
    for (i = 0; i < G.vexnum; i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            printf("%c ", G.vexs[i]);
            queue[rear++] = i;  // 入队列
        }
        while (head != rear)
        {
            j = queue[head++];  // 出队列
            for (k = first_vertex(G, j); k >= 0; k = next_vertix(G, j, k)) //k是为访问的邻接顶点
            {
                if (!visited[k])
                {
                    visited[k] = 1;
                    printf("%c ", G.vexs[k]);
                    queue[rear++] = k;
                }
            }
        }
    }
    printf("\n");
}
