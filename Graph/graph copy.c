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
    strcpy(user->UserName, userName);
    strcpy(user->Password, password);
    return user;
}

// Instantiat a new Graph for my users:
Users* NewGraph() {
    Users *graph = (Users*)malloc(sizeof(Users));
    if (graph == NULL) {
        printf("The memmory allocation of the graph has failed!!!");
        exit(405);
    }
    for(int i=0; i<SIZE; i++) {
        for(int j =0; j < SIZE; j++){
            graph->usersGraph[i][j] = NULL;
        }
    }
    return graph;
}

//Hash the id to an indext in th tow dimentional array:
int HashIndex(int id) {
    return id-1 % SIZE;
}

// Add a new udge to my graph:
void AddConnection(Users* graph, User* vertice, User* neighber) {
    graph->usersGraph[HashIndex(vertice->Id)][HashIndex(neighber->Id)] = neighber;
}

// Display:
void Display(Users* graph) {
    for (int i=0; i< SIZE; i++) {
        for (int j=0; j< SIZE; j++) {
            if(graph->usersGraph[i][j] != NULL) {
                printf("%s", graph->usersGraph[i][j]->UserName);
            } else {
                 printf(" <><><><><>");
            }
        }
        printf("\n");
    }
}