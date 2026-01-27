// 2 3 1 5 2 3
// 1 1 2 3 4 5
// 2 -> 6
// 3 -> 6
/*
 * let a1 < a2 < a3 < ... < an
 *  we need to find min of
 *  |a1 - ai| + |a2 - ai| + |a3 - ai| ... + |an - ai|
 *  let i = 1 -> 0 + |a2 - a1| + |a3 - a1| + ... |an - a1| = S - n*a1
 *  let i = 2 -> |a1 - a2| + 0 + |a3 - a2| + ... |an - a2| = - a1 + S -a1 - n*a2
 *  let i = 3 -> |a1 - a3| + |a2 - a3| + 0 + ... |an - a3|
 *  ......... -> .........................................
 *  MEDIAN
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &x : arr)
    cin >> x;
  sort(arr.begin(), arr.end());
  int median = arr[n / 2];
  int ans = 0;
  for (int i = 0; i < n; i++)
    ans += abs(arr[i] - median);
  cout << ans;
  return 0;
}
