#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

const int INF = 1e18;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;

// ---------------- FAST IO ----------------
void fastio()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

// ---------------- NUMBER THEORY ----------------
int gcdll(int a, int b) { return b == 0 ? a : gcdll(b, a % b); }
int lcmll(int a, int b) { return (a / gcdll(a, b)) * b; }

int modpow(int a, int b, int m = MOD)
{
  int res = 1;
  while (b)
  {
    if (b & 1)
      res = (res * a) % m;
    a = (a * a) % m;
    b >>= 1;
  }
  return res;
}

int modinv(int a, int m = MOD)
{
  // Fermat’s Little Theorem: a^(m-2) mod m
  return modpow(a, m - 2, m);
}

vector<int> sieve(int n)
{
  vector<bool> prime(n + 1, true);
  prime[0] = prime[1] = false;
  for (int i = 2; i * i <= n; i++)
    if (prime[i])
      for (int j = i * i; j <= n; j += i)
        prime[j] = false;
  vector<int> res;
  for (int i = 2; i <= n; i++)
    if (prime[i])
      res.pb(i);
  return res;
}

// ---------------- GRAPH ALGORITHMS ----------------
vector<int> adj[MAXN];
vector<bool> visited(MAXN, false);

void dfs(int u)
{
  visited[u] = true;
  for (auto v : adj[u])
    if (!visited[v])
      dfs(v);
}

void bfs(int start)
{
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty())
  {
    int u = q.front();
    q.pop();
    for (auto v : adj[u])
    {
      if (!visited[v])
      {
        visited[v] = true;
        q.push(v);
      }
    }
  }
}

// ---- Dijkstra (O((V+E) log V)) ----
vector<int> dijkstra(int n, int src, vector<vector<pair<int, int>>> &graph)
{
  vector<int> dist(n + 1, INF);
  dist[src] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
  pq.push({0, src});

  while (!pq.empty())
  {
    auto [d, u] = pq.top();
    pq.pop();
    if (d > dist[u])
      continue;
    for (auto [v, w] : graph[u])
    {
      if (dist[v] > d + w)
      {
        dist[v] = d + w;
        pq.push({dist[v], v});
      }
    }
  }
  return dist;
}

// ---- Bellman-Ford (O(VE)) ----
vector<int> bellman_ford(int n, int src, vector<tuple<int, int, int>> &edges)
{
  vector<int> dist(n + 1, INF);
  dist[src] = 0;

  for (int i = 1; i < n; i++)
    for (auto [u, v, w] : edges)
      if (dist[u] != INF && dist[v] > dist[u] + w)
        dist[v] = dist[u] + w;

  // Detect negative cycle (optional)
  for (auto [u, v, w] : edges)
    if (dist[u] != INF && dist[v] > dist[u] + w)
      cerr << "Negative cycle detected!" << endl;

  return dist;
}

// ---- Floyd-Warshall (O(N^3)) ----
vector<vector<int>> floyd_warshall(int n, vector<vector<int>> &dist)
{
  for (int k = 1; k <= n; k++)
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
        if (dist[i][k] < INF && dist[k][j] < INF)
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  return dist;
}

// ---- Topological Sort (Kahn’s Algo) ----
vector<int> topo_sort(int n, vector<vector<int>> &graph)
{
  vector<int> indeg(n, 0);
  for (int u = 0; u < n; u++)
    for (int v : graph[u])
      indeg[v]++;

  queue<int> q;
  for (int i = 0; i < n; i++)
    if (indeg[i] == 0)
      q.push(i);

  vector<int> topo;
  while (!q.empty())
  {
    int u = q.front();
    q.pop();
    topo.pb(u);
    for (int v : graph[u])
      if (--indeg[v] == 0)
        q.push(v);
  }
  return topo;
}

// ---- Disjoint Set Union (Union-Find) ----
struct DSU
{
  vector<int> parent, sz;
  DSU(int n)
  {
    parent.resize(n + 1);
    sz.assign(n + 1, 1);
    iota(all(parent), 0);
  }
  int find(int x)
  {
    if (x == parent[x])
      return x;
    return parent[x] = find(parent[x]);
  }
  bool unite(int a, int b)
  {
    a = find(a);
    b = find(b);
    if (a == b)
      return false;
    if (sz[a] < sz[b])
      swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
  }
};

// ---------------- SEARCHING / SORTING ----------------
int binary_search_custom(vector<int> &arr, int x)
{
  int l = 0, r = arr.size() - 1;
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    else if (arr[mid] < x)
      l = mid + 1;
    else
      r = mid - 1;
  }
  return -1;
}

//SIEVE

vector<bool> is_prime(MAXN, true);
vector<int> primes;

void simple_sieve(int n = MAXN) {
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    for (int i = 2; i <= n; i++)
        if (is_prime[i])
            primes.push_back(i);
}


// spf
vector<int> spf(MAXN);
vector<int> primes;
vector<bool> is_prime(MAXN, true);

void sieve_spf(int n = MAXN) {
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            spf[i] = i;
        }

        for (int p : primes) {
            if (p * i > n) break;
            is_prime[p * i] = false;
            spf[p * i] = p;
            if (i % p == 0) break; // O(n) optimization
        }
    }
}

vector<int> getPrimeFactors(int x) {
    vector<int> factors;
    while (x > 1) {
        factors.push_back(spf[x]);
        x /= spf[x];
    }
    return factors;
}
// totient

vector<int> phi(MAXN);

void totient_sieve(int n = MAXN) {
    for (int i = 0; i <= n; i++) phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {          // i is prime
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

// ---------------- PRIME CHECK ----------------
bool isPrimeFast(int n)
{
  if (n < 2)
    return false;
  return is_prime[n];
}

// ---------------- FACTORIZATION USING SPF ----------------
vector<int> getPrimeFactors(int x)
{
  vector<int> factors;
  while (x > 1)
  {
    factors.push_back(spf[x]);
    x /= spf[x];
  }
  return factors;
}
