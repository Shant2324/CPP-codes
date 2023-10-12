#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max(); // Define infinity as the maximum integer value.

struct Edge {
    int to, weight;
};

void Dijkstra(vector<vector<Edge>>& graph, int source, vector<int>& distance) {
    int n = graph.size();
    distance.assign(n, INF);
    distance[source] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Min-heap (distance, vertex)
    pq.push({0, source});

    while (!pq.empty()) {
        int curr_dist = pq.top().first;
        int curr_node = pq.top().second;
        pq.pop();

        if (curr_dist != distance[curr_node]) continue; // Skip if an old, shorter distance has been found.

        for (const Edge& edge : graph[curr_node]) {
            int neighbor = edge.to;
            int weight = edge.weight;

            if (distance[curr_node] + weight < distance[neighbor]) {
                distance[neighbor] = distance[curr_node] + weight;
                pq.push({distance[neighbor], neighbor});
            }
        }
    }
}

int main() {
    int n, m; // Number of nodes and edges
    cin >> n >> m;
    
    vector<vector<Edge>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    int source; // Source vertex
    cin >> source;

    vector<int> distance;
    Dijkstra(graph, source, distance);

    cout << "Shortest distances from vertex " << source << " to all other vertices:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Vertex " << i << ": " << distance[i] << "\n";
    }

    return 0;
}
