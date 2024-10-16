#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "graph.h"

// Instantiate a new grapg object:
Graph *GraphAdjacency()
{
    // Allocate memory for my graph structure:
    Graph *graph = (Graph*)malloc(sizeof(Graph));
    if (!graph)
    {
        printf("Memmory alloation for the graph has failed!");
        return NULL;
    }
    printf("The number of vertices: ");
    scanf("%d", &graph->Vertices);
    graph->Edges = graph->Vertices;
    // Allocate memory for the matrix:
    graph->Neighberhood = (int **)malloc((graph->Vertices) * sizeof(int *)); // Allocate the memory for the rows:
    if (!graph->Neighberhood)
    {
        printf("Memmory allocation for the matrix fas failed!\n");
        return NULL;
    }
    for (int i = 0; i < graph->Vertices; i++)
    {
        graph->Neighberhood[i] = (int *)malloc(graph->Vertices * sizeof(int)); // Allocate memory for the columns:
        if (!graph->Neighberhood[i])
        {
            printf("Memmory Allocation for the a matrix column has failed at index: %d\n", i);
            return NULL;
        }
    }
    // Give initial 0 values to matrix:
    for (int v = 0; v < graph->Vertices; v++)
    {
        for (int e = 0; e < graph->Vertices; e++)
        {
            graph->Neighberhood[v][e] = 0;
        }
    }
    return graph;
}

// Display the matrix:
void Display(Graph *graph)
{
    for (int i = 0; i < graph->Vertices; i++)
    {
        for (int j = 0; j < graph->Vertices; j++)
        {
            printf("%d ", graph->Neighberhood[i][j]);
        }
        printf("\n");
    }
}

// Instantiate a new user:
User *NewUser(int id, char *userName)
{
    User *user = (User *)malloc(sizeof(User));
    if (!user)
    {
        printf("Memmory allocation has failed!");
        return NULL;
    }
    user->Id = id;
    user->UserName = (char*)malloc(strlen(userName)+1);
    if (!user->UserName) {
        printf("Memmory allocation has failed!\n");
        return NULL;
    }
    strcpy(user->UserName, userName);
    return user;
}

// Hash the relationship between tow objects;
void EstablishRelationship(Graph *graph, User* vertice, User* edge) {
    int x = vertice->Id - 1;
    int y = edge->Id - 1;
    graph->Neighberhood[x][y] = 1;
}
