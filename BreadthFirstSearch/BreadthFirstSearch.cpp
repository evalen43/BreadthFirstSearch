// BreadthFirstSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>

using namespace std;
void BFS(int vtx, int A[][8], int n) {
    queue<int> Q;
    int visited[8]{ 0 };

    // Initial
    cout << vtx << ", " << flush;  // Visit vertex
    visited[vtx] = 1;
    Q.emplace(vtx);

    // Explore
    while (!Q.empty()) {
        int u = Q.front();  // Vertex u for exploring
        Q.pop();
        for (int v = 1; v <= n; v++) {  // Adjacent vertices of vertex u
            if (A[u][v] == 1 && visited[v] == 0) {  // Adjacent vertex and not visited
                cout << v << ", " << flush;  // Visit vertex
                visited[v] = 1;
                Q.emplace(v);
            }
        }
    }
    cout << endl;
}

int main()
{
    std::cout << "Hello World!\n";


    int A[8][8] = { {0, 0, 0, 0, 0, 0, 0, 0},
               {0, 0, 1, 1, 1, 0, 0, 0},
               {0, 1, 0, 1, 0, 0, 0, 0},
               {0, 1, 1, 0, 1, 1, 0, 0},
               {0, 1, 0, 1, 0, 1, 0, 0},
               {0, 0, 0, 1, 1, 0, 1, 1},
               {0, 0, 0, 0, 0, 1, 0, 0},
               {0, 0, 0, 0, 0, 1, 0, 0} };

    cout << "Vertex: 1 -> " << flush;
    BFS(1, A, 8);

    cout << "Vertex: 4 -> " << flush;
    BFS(4, A, 8);


    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
