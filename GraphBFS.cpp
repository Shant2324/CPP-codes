#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int to;
};

// Function to perform BFS traversal of a graph
void BFS(vector<vector<Edge>>& graph, int source) {
    int n = graph.size(); // Number of vertices
    vector<bool> visited(n, false); // Track visited vertices
    queue<int> q; // Queue for BFS

    // Start BFS from the source vertex
    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " "; // Process the current vertex (print it)

        // Traverse adjacent vertices
        for (const Edge& edge : graph[current]) {
            int neighbor = edge.to;
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int n, m; // Number of vertices and edges
    cin >> n >> m;

    vector<vector<Edge>> graph(n);

    // Read the edges of the graph
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // Assuming an undirected graph, so we add edges in both directions
        graph[u].push_back({v});
        graph[v].push_back({u});
    }

    int source; // Source vertex for BFS
    cin >> source;

    cout << "Breadth-First Search starting from vertex " << source << ":\n";
    BFS(graph, source);

    return 0;
}
