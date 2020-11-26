#ifndef GRAPH_H
#define GRAPH_H
#include "linkedlist.h"

typedef struct Vertex {
    int key;
    LkList incident_E;
    LkList adjacent_V;
} Vertex;

typedef struct Edge {
    int key;
    LkList incident_V;
} Edge;

typedef struct Graph {
    LkList vertices;
    LkList edges;
} Graph;

#endif
