#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int x, y;
  cin >> x >> y;
  vector<vector<int>> dp(501, vector<int>(501, INT_MAX));
  for (int i = 1; i <= 500; i++) {
    dp[i][i] = 0;
  }
  for (int i = 1; i <= 500; i++) {
    for (int j = 1; j <= 500; j++) {
      for (int k = 1; k <= j; k++) {
        dp[i][j] = min(dp[i][j - k] + dp[i][k] + 1, dp[i][j]);
      }
      for (int k = 1; k <= i; k++) {
        dp[i][j] = min(dp[k][j] + dp[i - k][j] + 1, dp[i][j]);
      }
    }
  }
  cout << dp[x][y];
  return 0;
}
