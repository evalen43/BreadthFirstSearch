#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

//void BFS(int vtx, int A[][10], int n) {
void BFS(int vtx, vector<vector<int>> A, int n) {
    queue<int> Q;
    int* visited;
    visited = new int[n] {0};
    //int visited[10]{ 0 };

    // Initial
    cout << vtx << ", " << flush;  // Visit vertex
    visited[vtx] = 1;
    Q.emplace(vtx);

    // Explore
    while (!Q.empty()) {
        int u = Q.front();  // Vertex u for exploring
        Q.pop();
        for (int v = 0; v < n; v++) {  // Adjacent vertices of vertex u
            if (A[u][v] == 1 && visited[v] == 0) {  // Adjacent vertex and not visited
                cout << v << ", " << flush;  // Visit vertex
                visited[v] = 1;
                Q.emplace(v);
            }
        }
    }
    cout << endl;
    delete[] visited;
}


int main()
{
    printf("Hello BFS\n");
    int n = 10;
    vector<vector<int>> A;
    //int A[10][10]
     A= { {0, 1, 0, 0, 0, 0, 1, 0, 1, 0},
                     {1, 0, 0, 0, 1, 0, 1, 0, 0,1},
                     {0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
                     {0, 0, 0, 0, 1, 1, 0, 0, 1, 0},
                     {0, 1, 1, 1, 0, 1, 0, 0, 0, 1},
                     {0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
                     {1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                     {1, 0, 0, 1, 0, 0, 0, 1, 0, 0},
                     {0, 1, 0, 0, 1, 0, 0,1,0,0} };

    cout << "Vertex: 6 -> " << flush;
    BFS(6, A, n);

    cout << "Vertex: 0 -> " << flush;
    BFS(0, A, n);

    cout << "Vertex: 7 -> " << flush;
    BFS(7, A, n);

    return 0;
}


