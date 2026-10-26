#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int V, E;

    cout << "Enter number of buildings: ";
    cin >> V;

    vector<vector<int>> adj(V);

    cout << "Enter number of pathways: ";
    cin >> E;

    cout << "Enter pathways (building numbers 0 to "
         << V - 1 << "):\n";

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter starting building: ";
    cin >> start;

    vector<bool> visited(V, false);
    vector<int> level(V, -1);
    queue<int> q;

    visited[start] = true;
    level[start] = 0;
    q.push(start);

    cout << "\nBFS Traversal and Levels:\n";

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        cout << "Building " << u
             << " - Level " << level[u] << endl;

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }

    return 0;
}
