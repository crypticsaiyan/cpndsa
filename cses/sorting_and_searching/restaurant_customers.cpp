#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back({a, 1});
    v.push_back({b, -1});
  }
  sort(v.begin(), v.end());
  int ans = INT_MIN;
  int temp = 0;
  for (int i = 0; i < 2 * n; i++) {
    if (v[i].second == 1)
      temp++;
    else
      temp--;
    ans = max(ans, temp);
  }
  cout << ans;
  return 0;
}
