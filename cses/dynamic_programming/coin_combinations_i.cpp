#include <bits/stdc++.h>
using namespace std;
static int const MOD = 1e9 + 7;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  vector<int> dp(x + 1, 0);
  dp[0] = 1;
  for (auto &k : v) {
    cin >> k;
  }
  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (i - v[j] < 0)
        continue;
      dp[i] = (dp[i] + dp[i - v[j]]) % MOD;
    }
  }
  cout << dp[x];
  return 0;
}
