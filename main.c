#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include "Graph/graph.h"

int main()
{
    Graph *matrix = GraphAdjacency();

    // Creating users
    User *firstUser = NewUser(1, "a");
    User *secondUser = NewUser(2, "b");
    User *thirdUser = NewUser(3, "c");
    User *forthUser = NewUser(4, "d");
    User *fifthUser = NewUser(5, "e");
    User *sixthUser = NewUser(6, "f");
    User *seventhUser = NewUser(7, "g");
    User *eighthUser = NewUser(8, "h");
    User *ninthUser = NewUser(9, "i");
    User *tenthUser = NewUser(10, "j");

    Display(matrix);
    printf("\n");
    // Espablish relationships;
    EstablishRelationship(matrix, firstUser, secondUser);
    EstablishRelationship(matrix, firstUser, forthUser);
    EstablishRelationship(matrix, firstUser, fifthUser);
    EstablishRelationship(matrix, firstUser, secondUser);
    EstablishRelationship(matrix, secondUser, firstUser);
    EstablishRelationship(matrix, secondUser, thirdUser);
    EstablishRelationship(matrix, secondUser, fifthUser);
    EstablishRelationship(matrix, thirdUser, secondUser);
    EstablishRelationship(matrix, forthUser, firstUser);
    EstablishRelationship(matrix, forthUser, fifthUser);
    EstablishRelationship(matrix, fifthUser, secondUser);
    EstablishRelationship(matrix, fifthUser, forthUser);
    EstablishRelationship(matrix, fifthUser, firstUser);
    EstablishRelationship(matrix, fifthUser, sixthUser);
    EstablishRelationship(matrix, fifthUser, eighthUser);
    EstablishRelationship(matrix, sixthUser, thirdUser);
    EstablishRelationship(matrix, sixthUser, fifthUser);
    EstablishRelationship(matrix, sixthUser, ninthUser);
    EstablishRelationship(matrix, sixthUser, tenthUser);
    EstablishRelationship(matrix, sixthUser, seventhUser);
    EstablishRelationship(matrix, seventhUser, sixthUser);
    EstablishRelationship(matrix, seventhUser, tenthUser);
    EstablishRelationship(matrix, eighthUser, fifthUser);
    EstablishRelationship(matrix, eighthUser, ninthUser);
    EstablishRelationship(matrix, ninthUser, sixthUser);
    EstablishRelationship(matrix, ninthUser, eighthUser);
    EstablishRelationship(matrix, ninthUser, tenthUser);
    EstablishRelationship(matrix, ninthUser, sixthUser);
    EstablishRelationship(matrix, tenthUser, sixthUser);
    EstablishRelationship(matrix, tenthUser, seventhUser);
    EstablishRelationship(matrix, tenthUser, ninthUser);
    Display(matrix);
    return 0;
}