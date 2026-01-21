#include <bits/stdc++.h>
using namespace std;

void dft(vector<vector<int>> adj, int V) {
  vector<int> visited(adj.size(), 0);
  visited[V] = 1;
  queue<int> q;
  q.push(V);
  while (!q.empty()) {
    int node = q.front();
    cout << node;
    q.pop();
    for (auto it : adj[node]) {
      if (!visited[it]) {
        visited[it] = 1;
        q.push(it);
      }
    }
  }
  cout << endl;
  return;
}

int main() {
  int n = 5;
  vector<vector<int>> adj(n + 1);

  // undirected edges
  adj[1] = {2, 3};
  adj[2] = {1, 4};
  adj[3] = {1, 4};
  adj[4] = {2, 3, 5};
  adj[5] = {4};
  dft(adj, 1);
  return 0;
}
