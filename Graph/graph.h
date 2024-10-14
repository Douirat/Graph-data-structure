#ifndef GRAPH
#define GRAPH

//Include the necessary libraries:
#include <stdio.h>
#include <stdlib.h>


//Declare a globale variable to hold the size of my 
#define SIZE 4

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

#endif // GRAPH