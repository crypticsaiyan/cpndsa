#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &x : arr)
    cin >> x;
  unordered_set<int> seen;
  int l = 0, ans = 0;
  for (int r = 0; r < n; r++) {
    while (seen.count(arr[r])) {
      seen.erase(arr[l]);
      l++;
    }
    seen.insert(arr[r]);
    ans += r - l + 1;
  }
  cout << ans;
  return 0;
}
