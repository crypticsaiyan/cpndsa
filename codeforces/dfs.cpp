#include <iostream>

#define MAXN 1000
using namespace std;

int adj[MAXN][MAXN] = {0};
int visited[MAXN];
int found;
int maxEdge;
int n;

void dfs(int u, int target, int currMax)
{
  if (found)
    return;
  if (u == target)
  {
    maxEdge = currMax;
    found = 1;
    return;
  }

  visited[u] = 1;
  for (int v = 0; v < n; v++)
  {
    if (!visited[v] && adj[u][v] != 0)
    {
  int newMax = max(currMax, adj[u][v]);
  dfs(v, target, newMax);
    }
  }
}

int main()
{
  n = 5;
  int m = 8;
  int x, y, w;
  for (int i = 0; i < m; i++)
  {
    cin >> x >> y >> w;
    adj[x][y] = w;
    adj[y][x] = w;
  }
  cin >> x >> y >> w;
  adj[x][y] = 0;
  adj[y][x] = 0;
  for (int i = 0; i < n; i++)
    visited[i] = 0;
  found = 0;
  maxEdge = -1;

  dfs(x, y, -1);

  if (!found)
  {
    printf("Graph disconnected after removing edge!\n");
    return 0;
  }
  cout << endl
       << maxEdge << endl;
  if (w < maxEdge)
    printf("Edge (%d, %d) with weight %d IS in the MST.\n", x, y, w);
  else
    printf("Edge (%d, %d) with weight %d is NOT in the MST.\n", x, y, w);

  return 0;
}