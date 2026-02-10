#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1e9 + 7;

int solve(int x, int y, vector<string> &s, vector<vector<int>> &dp) {
  int n = s.size();
  if (x >= n || y >= n)
    return 0;
  if (s[x][y] == '*')
    return 0;
  if (x == n - 1 && y == n - 1)
    return 1;
  if (dp[x][y] != -1)
    return dp[x][y];
  return dp[x][y] = (solve(x + 1, y, s, dp) + solve(x, y + 1, s, dp)) % MOD;
}

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<vector<int>> dp(n, vector<int>(n, -1));
  for (auto &x : s)
    cin >> x;
  cout << solve(0, 0, s, dp);
  return 0;
}
