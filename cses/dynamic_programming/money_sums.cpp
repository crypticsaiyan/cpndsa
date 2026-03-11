#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  sort(v.begin(), v.end());
  set<int> ans;
  ans.insert(0);
  for (int i = 0; i < n; i++) {
    set<int> news;
    for (auto &x : ans)
      news.insert(v[i] + x);
    for (auto &x : news)
      ans.insert(x);
    news.clear();
  }
  cout << ans.size() - 1 << endl;
  for (auto &x : ans) {
    if (x != 0)
      cout << x << " ";
  }
  return 0;
}
