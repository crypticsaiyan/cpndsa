#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back({x, i + 1});
  }
  stack<pair<int, int>> s;
  for (int i = 0; i < n; i++) {
    if (s.empty())
      cout << "0" << endl;
    else if (s.top().first < v[i].first) {
      cout << s.top().second << endl;
    } else {
      while (!s.empty()) {
        if (s.top().first < v[i].first) {
          break;
        }
        s.pop();
      }
      if (s.empty())
        cout << "0" << endl;
      else
        cout << s.top().second << endl;
    }
    s.push(v[i]);
  }
  return 0;
}
