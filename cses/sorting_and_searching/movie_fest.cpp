#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &x : v)
    cin >> x.first >> x.second;
  sort(v.begin(), v.end());
  int ans = 1;
  int maxi = v[0].second;
  for (int i = 1; i < n; i++) {
    if (maxi <= v[i].first) {
      ans++;
      maxi = v[i].second;
    } else
      maxi = min(maxi, v[i].second);
  }
  cout << ans;
  return 0;
}
