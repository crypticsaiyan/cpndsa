#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  vector<int> v(n);
  int sum = 0;
  for (auto &x : v) {
    cin >> x;
    sum += x;
  }
  sort(v.begin(), v.end());
  cout << max(sum, 2 * v[n - 1]);
  return 0;
}
