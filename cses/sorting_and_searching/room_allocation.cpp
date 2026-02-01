#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n;
  vector<pair<pair<int, int>, int>> v;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v.push_back({{a, b}, i});
  }
  sort(v.begin(), v.end());
  int curr = 1;
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;
  pq.push({v[0].first.second, 1});
  vector<int> ans(n);
  ans[v[0].second] = 1;
  for (int i = 1; i < n; i++) {
    if (v[i].first.first <= pq.top().first) {
      pq.push({v[i].first.second, ++curr});
      ans[v[i].second] = curr;
    } else {
      ans[v[i].second] = pq.top().second;
      int temp = pq.top().second;
      pq.pop();
      pq.push({v[i].first.second, temp});
    }
  }
  cout << curr << endl;
  for (auto &x : ans)
    cout << x << " ";
  return 0;
}
