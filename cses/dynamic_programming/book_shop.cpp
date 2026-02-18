#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> price(n), pages(n);
  for (auto &k : price)
    cin >> k;
  for (auto &k : pages)
    cin >> k;
  vector<int> dp(x + 1, 0);
  // dp[k] gives max pages at cost k
  for (int i = 0; i < n; i++) {
    for (int j = x; j >= price[i]; j--) {
      dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
    }
  }
  cout << dp[x];
  return 0;
}
