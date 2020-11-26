#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

Graph graph() {
    Graph G;
    G.vertices = lklist();
    G.order = 0;
    G.edges = lklist();
    G.size = 0;
    G.adjacency = matrix(0, 0);
    G.incidence = matrix(0, 0);
    return G;
}

void add_vertex_graph(Graph* G, int value) {
    /* Instantiates the new vertex. */
    Vertex vertex;
    vertex.value = value;
    vertex.v_key = (G->order)++;
    add_head_ll(&(G->vertices), vertex.v_key);

    /* Prepares the adjacency matrix. */
    Matrix adjacency = change_size_matrix(&(G->adjacency), G->order, G->order);
    G->adjacency = adjacency;

    /* Prepares the incidence matrix. */
    Matrix incidence = change_size_matrix(&(G->incidence), G->order, G->order);
    G->incidence = incidence;
}

void connect_vertices_G(Graph* G, int v_key1, int v_key2)