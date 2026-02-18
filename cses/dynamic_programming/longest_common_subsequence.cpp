#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for (auto &x : a)
    cin >> x;
  for (auto &x : b)
    cin >> x;
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < m + 1; j++) {
      if (a[i - 1] == b[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
  int i = n, j = m;
  cout << dp[n][m] << endl;
  vector<int> ans;
  while (i >= 1 && j >= 1) {
    if (a[i - 1] == b[j - 1]) {
      ans.push_back(b[j - 1]);
      i--;
      j--;
    } else if (dp[i][j - 1] > dp[i - 1][j])
      j--;
    else
      i--;
  }
  reverse(ans.begin(), ans.end());
  for (auto &x : ans)
    cout << x << " ";
  return 0;
}
