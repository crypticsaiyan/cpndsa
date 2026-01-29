#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x;
  cin >> x >> n;
  set<int> lights;
  lights.insert(0);
  lights.insert(x);
  multiset<int> dist;
  dist.insert(x);
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    auto right = lights.upper_bound(p);
    auto left = prev(right);
    int prev_len = *right - *left;
    dist.erase(dist.find(prev_len));
    dist.insert(*right - p);
    dist.insert(p - *left);
    lights.insert(p);
    cout << *dist.rbegin() << " ";
  }
  return 0;
}
