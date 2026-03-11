#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  vector<vector<int>> DP(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    DP[i][i] = v[i];
    if (i + 1 < n) {
      DP[i][i + 1] = max(v[i], v[i + 1]);
    }
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 0; j + i < n; j++) {
      // (j, i+j) -> (0, 2), (1, 3) then (0, 3)...
      int x = (i + j < n) ? DP[j + 2][i + j] : 0;
      int y = (j + i - 1 < n) ? DP[j + 1][i + j - 1] : 0;
      int z = (i + j - 2 < n) ? DP[j][i + j - 2] : 0;

      DP[j][i + j] = max(v[j] + min(x, y), v[i + j] + min(y, z));
    }
  }
  cout << DP[0][n - 1];
  return 0;
}
