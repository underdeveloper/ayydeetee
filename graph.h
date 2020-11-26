#ifndef GRAPH_H
#define GRAPH_H
#include "linkedlist.h"
#include "matrix.h"

typedef struct Vertex {
    int v_key; // Key that differentiates the vertex.
    int value; // Value contained in vertex.
} Vertex;

typedef struct Edge {
    int e_key; // Key that differentiates the edge.
    int weight; // Weight of edge.
} Edge;

typedef struct Graph {
    LkList vertices; // List of vertices within graph, according to v_key.
    int order; // Number of vertices.
    LkList edges; // List of edges within graph, according to e_key.
    int size; // Number of edges.
    Matrix adjacency; // Adjacency matrix.
    Matrix incidence; // Incidence matrix.
} Graph;

/* Initiates an empty graph. */
Graph graph();

/* Returns the order of the graph, i.e. the number of vertices. */
int order_of_graph(Graph* graph);

/* Returns the size of the graph, i.e. the number of edges. */
int size_of_graph(Graph *graph);

/* Adds a vertex to a graph. */
void add_vertex_graph(Graph* graph, int v_key);

/* Adds two vertices together, creates a new edge. */
void connect_vertices_graph(Graph *graph, int v_key1, int v_key2);

#endif
