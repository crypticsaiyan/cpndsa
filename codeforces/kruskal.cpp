#include <bits/stdc++.h>
#define MAXN 10000
using namespace std;

struct Edge
{
  int u, v;
  double w;
};

int parent[MAXN];

int find(int i)
{
  while (parent[i] != i)
  {
    i = parent[i];
  }
  return i;
}

void unite(int a, int b)
{
  int pa = find(a);
  int pb = find(b);
  parent[pb] = pa;
}

int main()
{
  int n = 4, m = 5;
  int x[m]
  while(m--){
    
  }
  return 0;
}