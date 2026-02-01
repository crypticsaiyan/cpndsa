#include <bits/stdc++.h>
using namespace std;

bool comp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
  return a.first.first < b.first.first
             ? true
             : (a.first.first == b.first.first ? a.first.second > b.first.second
                                               : false);
}

int main() {
  int n, x, y;
  cin >> n;
  vector<int> contains(n, 0);
  vector<int> contained(n, 0);
  vector<pair<pair<int, int>, int>> v;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    v.push_back({{x, y}, i});
  }
  sort(v.begin(), v.end(), comp);

  int maxR = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (v[i].first.second <= maxR) {
      contained[v[i].second] = 1;
    }
    maxR = max(maxR, v[i].first.second);
  }

  int minR = INT_MAX;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i].first.second >= minR) {
      contains[v[i].second] = 1;
    }
    minR = min(minR, v[i].first.second);
  }

  for (int i = 0; i < n; i++)
    cout << contains[i] << " ";
  cout << endl;

  for (int i = 0; i < n; i++)
    cout << contained[i] << " ";

  return 0;
}
