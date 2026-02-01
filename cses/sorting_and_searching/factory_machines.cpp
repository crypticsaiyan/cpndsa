#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n;
  cin >> n >> t;
  vector<long long> v(n);
  for (auto &x : v)
    cin >> x;
  long long low = 0;
  long long high = *min_element(v.begin(), v.end()) * t;
  long long ans = high;
  while (low <= high) {
    long long mid = (low + high) / 2;
    long long products = 0;
    for (auto &x : v) {
      products += mid / x;
      if (products >= t)
        break;
    }
    if (products >= t) {
      ans = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  cout << ans;
  return 0;
}
