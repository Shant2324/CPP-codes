#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform topological sorting using Kahn's algorithm
vector<int> topologicalSort(vector<vector<int>>& graph, int numVertices) {
    vector<int> inDegree(numVertices, 0); // Initialize in-degrees of all vertices to 0
    vector<int> result; // Store the topological ordering
    queue<int> q; // Queue to hold vertices with in-degree 0

    // Calculate in-degrees
    for (int u = 0; u < numVertices; u++) {
        for (int v : graph[u]) {
            inDegree[v]++;
        }
    }

    // Add vertices with in-degree 0 to the queue
    for (int u = 0; u < numVertices; u++) {
        if (inDegree[u] == 0) {
            q.push(u);
        }
    }

    // Perform topological sorting
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        result.push_back(u);

        for (int v : graph[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }

    return result;
}

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices and edges: ";
    cin >> numVertices >> numEdges;

    vector<vector<int>> graph(numVertices);

    cout << "Enter directed edges (format: u v):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    vector<int> topologicalOrder = topologicalSort(graph, numVertices);

    cout << "Topological Sorting Order:" << endl;
    for (int vertex : topologicalOrder) {
        cout << vertex << " ";
    }
    cout << endl;

    return 0;
}
