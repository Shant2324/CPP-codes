#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Graph represented as an adjacency list
vector<vector<int>> graph;

// Function to perform DFS
void DFS(int start) {
    vector<bool> visited(graph.size(), false); // Initialize all vertices as not visited
    stack<int> s; // Create a stack for DFS

    // Push the starting node onto the stack
    s.push(start);

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        // Process the node if it hasn't been visited
        if (!visited[node]) {
            cout << node << " "; // Output or process the current node
            visited[node] = true;

            // Push adjacent unvisited nodes onto the stack
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
}

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices and edges: ";
    cin >> numVertices >> numEdges;

    graph.resize(numVertices);

    cout << "Enter the edges (format: u v):" << endl;
