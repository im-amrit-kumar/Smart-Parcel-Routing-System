#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Graph {
private:
    unordered_map<int, vector<pair<int, int>>> adj;

public:
    void addEdge(int u, int v, int w);
    void loadGraph(const string &filename);
    void dijkstra(int start, const vector<int> &destinations);
};

#endif