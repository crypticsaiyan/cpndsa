#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  for (int i = 0; i < n + 1; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i - j < 0)
        continue;
      else
        dp[i] = (dp[i] + dp[i - j]) % MOD;
    }
  }
  cout << dp[n];
  return 0;
}
