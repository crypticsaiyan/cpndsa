#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1e9 + 7;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<vector<int>> dp(n, vector<int>(m + 2, 0));

  if (v[0] == 0) {
    for (int val = 1; val <= m; val++)
      dp[0][val] = 1;
  } else {
    dp[0][v[0]] = 1;
  }

  for (int i = 1; i < n; i++) {
    for (int val = 1; val <= m; val++) {

      if (v[i] != 0 && v[i] != val)
        continue;

      dp[i][val] = ((long long)dp[i - 1][val] + dp[i - 1][val - 1] +
                    dp[i - 1][val + 1]) %
                   MOD;
    }
  }

  long long ans = 0;
  for (int val = 1; val <= m; val++)
    ans = (ans + dp[n - 1][val]) % MOD;

  cout << ans;
}
