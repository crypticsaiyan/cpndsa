#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  int sum = 0, maxel = 0;
  for (auto &x : v) {
    cin >> x;
    sum += x;
    maxel = max(maxel, x);
  }
  int low = maxel;
  int high = sum;
  int ans = high;
  while (low <= high) {
    int mid = (low + high) / 2;
    int temp_sum = 0, part = 0;
    for (int i = 0; i < n; i++) {
      temp_sum += v[i];
      if (temp_sum > mid) {
        part++;
        temp_sum = v[i];
      }
    }
    part++;
    if (part <= k) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
