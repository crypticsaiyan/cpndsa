#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;
    arr[i].first = y;
    arr[i].second = i + 1;
  }
  sort(arr.begin(), arr.end());
  int l = 0, r = n - 1;
  int sum = 0;
  while (l < r) {
    sum = arr[l].first + arr[r].first;
    if (sum == x) {
      cout << arr[l].second << " " << arr[r].second;
      return 0;
    } else if (sum > x)
      r--;
    else
      l++;
  }
  cout << "IMPOSSIBLE";
  return 0;
}
