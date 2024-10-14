#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "graph.h"

// Instantiate a new user:
User* NewUser(int id, char userName[], char password[]) {
    User* user = (User*)malloc(sizeof(User));
    if (user == NULL) {
        printf("The memory allocation of type user has failed!");
        exit(405);
    }
    user->Id = id;
    user->UserName = strdup(userName);  // Dynamically allocate memory for strings
    user->Password = strdup(password);
    return user;
}

// Instantiate a new graph for users (No dynamic memory allocation for graph needed):
Users* NewGraph() {
    Users *graph = (Users*)malloc(sizeof(Users));
    if (graph == NULL) {
        printf("The memory allocation of the graph has failed!!!");
        exit(405);
    }
    // Initialize the statically allocated 2D array:
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            graph->usersGraph[i][j] = NULL;  // Set all elements to NULL initially
        }
    }
    return graph;
}

// Hash the id to an index in the 2D array:
int HashIndex(int id) {
    return (id - 1) % SIZE;
}

// Add a new edge to the graph:
void AddConnection(Users* graph, User* vertice, User* neighbor) {
    int verticeIndex = HashIndex(vertice->Id);
    int neighborIndex = HashIndex(neighbor->Id);
    graph->usersGraph[verticeIndex][neighborIndex] = neighbor;  // Add the neighbor
}

// Display the graph:
void Display(Users* graph) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (graph->usersGraph[i][j] != NULL) {
                printf("%s ", graph->usersGraph[i][j]->UserName);  // Print username if connected
            } else {
                printf(" <><><><> ");  // Placeholder for no connection
            }
        }
        printf("\n");
    }
}
