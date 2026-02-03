#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;
  vector<int> prefix(n);
  prefix[0] = v[0];
  for (int i = 1; i < n; i++)
    prefix[i] = prefix[i - 1] + v[i];
  map<int, int> mp;
  mp[0] = 1;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += mp[abs(n - prefix[i] % n) % n];
    mp[abs(n - prefix[i] % n) % n]++;
  }
  cout << ans;
  return 0;
}
