#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1e9 + 7;
static const int MOD_INV = (MOD + 1) / 2;

int main() {
  int n;
  cin >> n;
  if ((n * (n + 1)) % 4 != 0)
    cout << "0";
  else {
    int m = (n * (n + 1)) / 4;
    vector<int> dp(m + 1, 0);
    dp[0] = 1;
    for (int j = 1; j <= n; j++) {
      for (int i = m; i > 0; i--) {
        if (i - j < 0)
          break;
        dp[i] = (dp[i - j] + dp[i]) % MOD;
      }
    }
    cout << (1L * dp[m] * MOD_INV) % MOD;
  }
  return 0;
}
