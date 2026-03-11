#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> v(n);
  vector<vector<int>> visited(n, vector<int>(n, 0));
  for (auto &x : v)
    cin >> x;
  vector<pair<int, int>> curr;
  curr.push_back({0, 0});
  string ans = "";
  ans += v[0][0];
  visited[0][0] = 1;
  for (int i = 0; i < 2 * n - 2; i++) {
    vector<pair<int, int>> news;
    char best = 'Z';
    for (auto [x, y] : curr) {
      if (x + 1 < n)
        best = min(best, v[x + 1][y]);
      if (y + 1 < n)
        best = min(best, v[x][y + 1]);
    }

    for (auto [x, y] : curr) {
      if (x + 1 < n && best == v[x + 1][y] && !visited[x + 1][y]) {
        news.push_back({x + 1, y});
        visited[x + 1][y] = 1;
      }
      if (y + 1 < n && best == v[x][y + 1] && !visited[x][y + 1]) {
        news.push_back({x, y + 1});
        visited[x][y + 1] = 1;
      }
    }
    curr = news;
    ans += best;
  }
  cout << ans;
  return 0;
}
