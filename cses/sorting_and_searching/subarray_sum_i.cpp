#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (auto &k : v)
    cin >> k;
  int left = 0, right = 0, temp = 0;
  int ans = 0;
  while (left < n && right < n) {
    temp += v[right];
    if (temp == x) {
      temp -= v[left];
      ans++;
      left++;
      right++;
    } else if (temp < x)
      right++;
    else {
      if (left == right) {
        left = right + 1;
        right++;
        temp = 0;
      } else {
        temp -= (v[left] + v[right]);
        left++;
      }
    }
  }
  cout << ans;
  return 0;
}
