// problem-url: https://codeforces.com/problemset/problem/1899/B
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pv(v)                                                                  \
  for (auto x : v) {                                                           \
    cout << x << " ";                                                          \
  }                                                                            \
  cout << endl
#define pa(i, n, arr)                                                          \
  for (int i = 0; i < n; i++) {                                                \
    cout << arr[i] << " ";                                                     \
  }                                                                            \
  cout << endl
#define vi vector<int>

// string str; getline(cin, str);

int32_t main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vi v(n);
    fo(i, n) cin >> v[i];
    vi prefix(n + 1);
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
      prefix[i] = prefix[i - 1] + v[i - 1];
    int ans = 0;
    for (int i = 1; i < n; i++) {
      if (n % i)
        continue;
      else {
        int localmin = 1e18;
        int localmax = -1e18;
        for (int j = i; j <= n; j += i) {
          int curr = prefix[j] - prefix[j - i];
          localmin = min(localmin, curr);
          localmax = max(localmax, curr);
        }
        ans = max(ans, localmax - localmin);
      }
    }
    cout << ans << endl;
  }
  return 0;
}
