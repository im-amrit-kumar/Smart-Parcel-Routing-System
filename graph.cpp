#include "graph.h"
#include <fstream>
#include <iostream>
#include <queue>
#include <limits>
#include <set>

const int INF = numeric_limits<int>::max();

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
}

void Graph::loadGraph(const string &filename) {
    ifstream file(filename);
    int u, v, w;
    while (file >> u >> v >> w) {
        addEdge(u, v, w);
    }
}

void Graph::dijkstra(int start, const vector<int> &destinations) {
    unordered_map<int, int> dist;
    unordered_map<int, int> parent;
    for (auto &node : adj) dist[node.first] = INF;
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto &edge : adj[u]) {
            int v = edge.first, w = edge.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "\n📍 Delivery Routes from warehouse " << start << ":
";
    for (int dest : destinations) {
        if (dist[dest] == INF) {
            cout << "To " << dest << ": No path
";
        } else {
            cout << "To " << dest << ": Distance = " << dist[dest] << "\n";
        }
    }
}