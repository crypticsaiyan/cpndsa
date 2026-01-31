#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

int32_t main() {
  int n;
  cin >> n;
  map<int, int> mp;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    mp[temp]++;
  }
  int ans = 1;
  for (auto &x : mp) {
    ans = ans * (x.second + 1) % MOD;
  }
  cout << (ans - 1) % MOD;
  return 0;
}
