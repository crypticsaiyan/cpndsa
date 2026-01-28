#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back({temp, i});
  }
  sort(v.begin(), v.end());
  int ans = 1;
  for (int i = 0; i < n - 1; i++)
    if (v[i + 1].second < v[i].second)
      ans++;
  cout << ans;
  return 0;
}
