#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
    return graph;
}

//