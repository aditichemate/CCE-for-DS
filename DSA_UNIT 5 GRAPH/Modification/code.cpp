#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int V, E, start;

    cout << "Enter number of buildings: ";
    cin >> V;

    vector<vector<int>> adj(V);

    cout << "Enter number of pathways: ";
    cin >> E;

    cout << "Enter pathways (u v):\n";

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter starting vertex (0 to "
         << V - 1 << "): ";
    cin >> start;

    if (start < 0 || start >= V) {
        cout << "Invalid starting vertex.\n";
        return 0;
    }

    vector<bool> visited(V, false);
    vector<int> level(V, -1);
    vector<int> order;
    queue<int> q;

    visited[start] = true;
    level[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        order.push_back(u);

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }

    cout << "\nBFS Traversal Order: ";
    for (int v : order) {
        cout << v << " ";
    }

    cout << "\nReachable Vertices: ";
    int count = 0;

    for (int i = 0; i < V; i++) {
        if (visited[i]) {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nUnvisited Vertices: ";
    bool found = false;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << "\nCount of Reachable Vertices: "
         << count << endl;

    cout << "\nBFS Levels:\n";

    for (int i = 0; i < V; i++) {
        if (visited[i]) {
            cout << "Vertex " << i
                 << " -> Level " << level[i]
                 << endl;
        }
    }

    return 0;
}
