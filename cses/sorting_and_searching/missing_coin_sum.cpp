#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;
  sort(a.begin(), a.end());
  int s = 0, i = 0;
  while (i < n && a[i] <= s + 1) {
    s += a[i];
    i++;
  }
  cout << s + 1;
  return 0;
}
