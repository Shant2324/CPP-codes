#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Structure to represent an edge in the graph
struct Edge {
    int dest, weight;
};

// Function to find the minimum spanning tree using Prim's algorithm
void primMST(vector<vector<Edge>>& graph, int numVertices) {
    vector<int> parent(numVertices, -1); // To store the MST
    vector<int> key(numVertices, INF); // To track key values
    vector<bool> inMST(numVertices, false); // To check if vertex is in MST

    // Priority queue to choose the minimum key value vertex
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Start with the first vertex as the source
    int source = 0;
    key[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        for (const Edge& edge : graph[u]) {
            int v = edge.dest;
            int weight = edge.weight;

            if (!inMST[v] && weight < key[v]) {
                parent[v] = u;
                key[v] = weight;
                pq.push({key[v], v});
            }
        }
    }

    // Print the MST
    for (int i = 1; i < numVertices; i++) {
        cout << "Edge: " << parent[i] << " - " << i << " Weight: " << key[i] << endl;
    }
}

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices and edges: ";
    cin >> numVertices >> numEdges;

    vector<vector<Edge>> graph(numVertices);

    cout << "Enter edges and their weights (format: src dest weight):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    cout << "Minimum Spanning Tree:" << endl;
    primMST(graph, numVertices);

    return 0;
}
