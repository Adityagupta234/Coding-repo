#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> pii;

vector<int> dijkstra(vector<vector<pii>>& graph, int src) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    
    dist[src] = 0;
    pq.push({0, src});
    
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        for (auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    
    return dist;
}

int main() {
    vector<vector<pii>> graph = {
        {{1, 4}, {2, 1}},
        {{3, 1}},
        {{1, 2}, {3, 5}},
        {}
    };
    
    vector<int> dist = dijkstra(graph, 0);
    
    for (int i = 0; i < dist.size(); i++)
        cout << "Distance to " << i << ": " << dist[i] << endl;
    
    return 0;
}