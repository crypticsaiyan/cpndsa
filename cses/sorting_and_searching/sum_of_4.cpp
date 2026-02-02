// shit approach -> O(n^3)
// optimal -> O(n^2logn) by storing the sum of all pairs and binary searching to
// get the required sum
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
  for (int i = 0; i < n - 3; i++) {
    for (int j = i + 1; j < n - 2; j++) {
      int temp_sum = v[i].first + v[j].first;
      int left = j + 1, right = n - 1;
      while (left < right) {
        int sum = temp_sum + v[left].first + v[right].first;
        if (sum == x) {
          flag = 1;
          cout << v[i].second << " " << v[j].second << " " << v[left].second
               << " " << v[right].second;
          break;
        } else if (sum < x)
          left++;
        else
          right--;
      }
      if (flag)
        break;
    }
    if (flag)
      break;
  }
  if (!flag)
    cout << "IMPOSSIBLE";
  return 0;
}
