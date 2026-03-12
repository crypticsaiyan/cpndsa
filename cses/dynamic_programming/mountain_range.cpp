#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  stack<int> s;
  vector<int> left(n), right(n);
  for (int i = 0; i < n; i++) {
    while (!s.empty() && v[i] >= v[s.top()]) {
      s.pop();
    }
    if (s.empty())
      left[i] = -1;
    else
      left[i] = s.top();
    s.push(i);
  }

  s = stack<int>();

  for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() && v[i] >= v[s.top()]) {
      s.pop();
    }
    if (s.empty())
      right[i] = -1;
    else
      right[i] = s.top();
    s.push(i);
  }

  // Toposort
  vector<int> indices(n);
  iota(indices.begin(), indices.end(), 0);
  sort(indices.begin(), indices.end(), [&](int a, int b) {
    if (v[a] != v[b])
      return v[a] > v[b];
    return a < b; // Stabilize sort for equal heights
  });
  vector<int> dp(n);
  int ans = 0, a, b;

  for (int i : indices) {
    a = (right[i] == -1) ? 0 : dp[right[i]];
    b = (left[i] == -1) ? 0 : dp[left[i]];
    dp[i] = 1 + max(a, b);
    ans = max(ans, dp[i]);
  }
  cout << ans << endl;
  return 0;
}
