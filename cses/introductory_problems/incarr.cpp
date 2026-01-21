#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  int prev;
  int ans = 0;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (i != 0 && prev > temp) {
      ans += prev - temp;
      temp = prev;
    }
    prev = temp;
  }
  cout << ans;
  return 0;
}
