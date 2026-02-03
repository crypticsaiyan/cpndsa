#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  vector<int> pre(n);
  pre[0] = v[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + v[i];
  }
  map<int, int> mp;
  mp[0] = 1;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (mp.find(pre[i] - x) != mp.end()) {
      ans += mp[pre[i] - x];
    }
    mp[pre[i]]++;
  }
  cout << ans;
  return 0;
}
