#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (auto &k : v)
    cin >> k;
  vector<int> dp(x + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 1; i < x + 1; i++) {
    int temp = INT_MAX;
    for (int j = 0; j < n; j++) {
      if (i - v[j] < 0)
        continue;
      temp = min(temp, 1 + dp[i - v[j]]);
    }
    dp[i] = temp;
  }
  if (dp[x] == INT_MAX)
    cout << "-1";
  else
    cout << dp[x];
  return 0;
}
