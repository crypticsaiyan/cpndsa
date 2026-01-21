#include <bits/stdc++.h>
using namespace std;

void dfs(int node, const vector<vector<int>> &adj, vector<int> &visited,
         vector<int> &ls) {
  visited[node] = 1;
  ls.push_back(node);
  for (auto it : adj[node]) {
    if (!visited[it]) {
      dfs(it, adj, visited, ls);
    }
  }
}

vector<int> graphdfs(const vector<vector<int>> &adj, int V) {
  vector<int> visited(adj.size(), 0);
  visited[V] = 1;
  vector<int> ls;
  dfs(V, adj, visited, ls);
  return ls;
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
  vector<int> ls = graphdfs(adj, 1);
  for (auto it : ls) {
    cout << it;
  }
  return 0;
}
