#include <stdio.h>
#include "Graph/graph.h"

int main()
{
    // Create instances of my graph object:
    Users *usersGraph = NewGraph();
    User *FirstUser = NewUser(1, "BenDoe", "Ben1991");
    User *SecondUser = NewUser(2, "JoeRogan", "JOE1981");
    User *ThirdUser = NewUser(3, "MarkManson", "Mark1990");
    User *ForthUser = NewUser(4, "JordanPeterson", "jordat1945");
    User *FifthUser = NewUser(5, "OumaMia", "Love2024");
    AddConnection(usersGraph, FirstUser, FirstUser);
    AddConnection(usersGraph, FirstUser, SecondUser);
    AddConnection(usersGraph, FirstUser, ThirdUser);
    AddConnection(usersGraph, FirstUser, ForthUser);
    AddConnection(usersGraph, SecondUser, SecondUser);
    AddConnection(usersGraph, SecondUser, ForthUser);
    AddConnection(usersGraph, SecondUser, FifthUser);
    AddConnection(usersGraph, ThirdUser, ThirdUser);
    AddConnection(usersGraph, ThirdUser, ForthUser);
    AddConnection(usersGraph, ForthUser, ForthUser);
    AddConnection(usersGraph, ForthUser, ThirdUser);
    AddConnection(usersGraph, FifthUser, FifthUser);
    AddConnection(usersGraph, FifthUser, SecondUser);
    Display(usersGraph);
    return 0;
}