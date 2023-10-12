#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Graph {
public:
    Graph(int vertices);
    void addEdge(int v, int w);
    void findSCCs();

private:
    void DFS(int v, stack<int>& s);
    void DFSUtil(int v, vector<bool>& visited);

    int vertices;
    vector<vector<int>> adj;
    vector<vector<int>> rev_adj;
    vector<bool> visited;
    stack<int> s;
};

Graph::Graph(int vertices) {
    this->vertices = vertices;
    adj.resize(vertices);
    rev_adj.resize(vertices);
    visited.assign(vertices, false);
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add edge from v to w
    rev_adj[w].push_back(v); // Add edge from w to v (for reverse graph)
}

void Graph::DFS(int v, stack<int>& s) {
    visited[v] = true;
    for (int i = 0; i < adj[v].size(); i++) {
        int adjacent = adj[v][i];
        if (!visited[adjacent]) {
            DFS(adjacent, s);
        }
    }
    s.push(v);
}

void Graph::DFSUtil(int v, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";
    for (int i = 0; i < rev_adj[v].size(); i++) {
        int adjacent = rev_adj[v][i];
        if (!visited[adjacent]) {
            DFSUtil(adjacent, visited);
        }
    }
}

void Graph::findSCCs() {
    // Perform DFS on the original graph to fill the stack with vertices
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            DFS(i, s);
        }
    }

    // Reverse the graph
    vector<bool> reversed_visited(vertices, false);

    // Process the vertices in the order from the stack
    while (!s.empty()) {
        int v = s.top();
        s.pop();

        if (!reversed_visited[v]) {
            cout << "SCC: ";
            DFSUtil(v, reversed_visited);
            cout << endl;
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    Graph graph(vertices);

    cout << "Enter edges (format: source destination):" << endl;
    for (int i = 0; i < edges; i++) {
        int source, destination;
        cin >> source >> destination;
        graph.addEdge(source, destination);
    }

    cout << "Strongly Connected Components:" << endl;
    graph.findSCCs();

    return 0;
}
