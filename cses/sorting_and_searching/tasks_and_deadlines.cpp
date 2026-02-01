#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n, a, d;
  cin >> n;
  vector<int> v;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a >> d;
    sum += d;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (int i = 1; i <= n; i++) {
    sum -= i * v[n - i];
  }
  cout << sum;
  return 0;
}
