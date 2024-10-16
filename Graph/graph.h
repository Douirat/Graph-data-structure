#ifndef GRAPH
#define GRAPH

//Define the graph object:
typedef struct {
    int Vertices;
    int Edges;
    int **Neighberhood;
}Graph;

// Define user struct to represent the relationship between my objects:
typedef struct {
int Id;
char *UserName;
// char *Password;
}User;



// Invite my functions to the global scope:
Graph *GraphAdjacency();
void Display(Graph *graph);
User *NewUser(int id, char *userName);
void EstablishRelationship(Graph *graph, User* vertice, User* edge);

#endif // !1