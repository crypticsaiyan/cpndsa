#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> v;
  int k;
  for (int i = 0; i < n; i++) {
    cin >> k;
    v.push_back({k, i + 1});
  }
  sort(v.begin(), v.end());
  int flag = 0;
  for (int i = 0; i < n - 2; i++) {
    int left = i + 1;
    int right = n - 1;
    while (left < right) {
      int sum = v[left].first + v[right].first + v[i].first;
      if (sum == x) {
        flag = 1;
        cout << v[left].second << " " << v[right].second << " " << v[i].second
             << endl;
        break;
      } else if (sum < x) {
        left++;
      } else
        right--;
    }
    if (flag)
      break;
  }
  if (!flag)
    cout << "IMPOSSIBLE";
  return 0;
}
