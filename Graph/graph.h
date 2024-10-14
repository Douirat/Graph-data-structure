#ifndef GRAPH
#define GRAPH

//Include the necessary libraries:
#include <stdio.h>
#include <stdlib.h>


//Declare a globale variable to hold the size of my 
#define SIZE 5

// Declare a user object to represent a user of a social media application:
typedef struct {
int Id;
char *UserName;
char *Password;
}User;


// Declare a object to represnt my Graph
typedef struct {
    User* usersGraph[SIZE][SIZE]; // 2D array to represent the graph of users
} Users;

// List the method signature for the scope of my program to reach them:
int HashIndex(int id);
Users* NewGraph();
User* NewUser(int id, char userName[], char password[]);
void AddConnection(Users* graph, User* vertice, User* neighber);
void Display(Users* graph);

#endif // GRAPH