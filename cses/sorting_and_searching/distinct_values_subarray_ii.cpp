#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  int left = 0, right = 1, distinct = 1, ans = 1, dist = 1;
  for (int i = 1; i < n; i++) {
    if (v[i] != v[i - 1])
      distinct++;
    else
      dist++;
    if (distinct <= k)
      right++;
    else {
      distinct--;
      left += dist;
      dist = 1;
    }
    ans += (right - left) + 1;
  }
  cout << ans;
  return 0;
}
